#include <iostream>
#include <fstream>
#include <string>
#include <vector>
/*
    Streams -> flow of data.
*/
/*
    1. Writing to a file
*/
class Student
{
public:
    Student();
    Student(std::string name, int rollnum, std::string branch);
    std::string name;
    int rollNum;
    std::string branch;
    friend std::ofstream &operator<<(std::ofstream &ofs, Student &s);
    friend std::ifstream &operator>>(std::ifstream &ifs, Student &s);
};
Student::Student() { ; }
std::ofstream &operator<<(std::ofstream &ofs, Student &s)
{
    ofs << s.name << std::endl;
    ofs << s.rollNum << std::endl;
    ofs << s.branch << std::endl;
    return ofs;
}
Student::Student(std::string name, int rollnum, std::string branch)
{
    this->name = name;
    this->rollNum = rollNum;
    this->branch = branch;
}
std::ifstream &operator>>(std::ifstream &ifs, Student &s)
{
    ifs >> s.name;
    ifs >> s.rollNum;
    ifs >> s.branch;

    return ifs;
}
void Display()
{
    std::ofstream ofs("My.txt", std::ios::trunc);
    ofs << "John" << std::endl;
    ofs << 25 << std::endl;
    ofs << 30 << std::endl;
    ofs.close();
    std::ifstream ifs("My.txt");
    std::string str;
    int number1;
    int number2;
    ifs >> str >> number1 >> number2;
    std::cout << "name " << str << std::endl;
    std::cout << "number 1 " << number1 << std::endl;
    std::cout << "number 2 " << number2 << std::endl;
    ifs.close();
}
/*Student Exercise*/

class List
{
private:
    std::string Name;
    float Quantity;
    float Price;

public:
    List();
    List(std::string name, float Quantity, float Price);
    std::string getName() { return this->Name; }
    float getQuantity() { return this->Quantity; }
    float getPrice() { return this->Price; }
    friend std::ofstream &operator<<(std::ofstream &of, List &L);
    friend std::ifstream &operator>>(std::ifstream &ifs, List &L);
    friend std::ostream &operator<<(std::ostream &os, List &L);
};
List::List() { ; }
List::List(std::string name, float Quantity, float Price)
{
    this->Name = name;
    this->Quantity = Quantity;
    this->Price = Price;
}
std::ofstream &operator<<(std::ofstream &of, List &L)
{
    of << L.Name << std::endl;
    of << L.Quantity << std::endl;
    of << L.Price << std::endl;
    return of;
}
std::ifstream &operator>>(std::ifstream &ifs, List &L)
{
    ifs >> L.Name;
    ifs >> L.Quantity;
    ifs >> L.Price;
    return ifs;
}
std::ostream &operator<<(std::ostream &os, List &L)
{
    std::cout << L.Name << std::endl;
    std::cout << L.Quantity << std::endl;
    std::cout << L.Price << std::endl;

    return os;
}
int main()
{
    int n;
    std::vector<List> vtr;
    std::cout << "Enter number of items on your list: ";
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::string s;
        float q;
        float p;
        std::cin >> s >> q >> p;
        List temp = List(s, q, p);
        vtr.push_back(temp);
    }

    std::ofstream ofs("exrs.txt");

    for (int i = 0; i < vtr.size(); i++)
    {
        ofs << vtr[i].getName() << std::endl;
        ofs << vtr[i].getQuantity() << std::endl;
        ofs << vtr[i].getPrice() << std::endl;
    }
    ofs.close();

    std::cout << "Output" << std::endl;
    std::ifstream ifs("exrs.txt");
    List item;
    for (int i = 0; i < n; i++)
    {
        ifs >> item;
        std::cout << item << std::endl;
    }

    ifs.close();

    return 0;
}
/*serialization*/
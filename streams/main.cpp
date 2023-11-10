#include <iostream>
#include <fstream>
#include <string>
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
    Student(std::string name,int rollnum,std::string branch);
    std::string name;
    int rollNum;
    std::string branch;
    friend std::ofstream &operator<<(std::ofstream &ofs, Student &s);
    friend std::ifstream &operator>>(std::ifstream &ifs, Student &s);
};
Student::Student(){;}
std::ofstream &operator<<(std::ofstream &ofs, Student &s)
{
    ofs << s.name << std::endl;
    ofs << s.rollNum << std::endl;
    ofs << s.branch <<std::endl;
    return ofs;
}
Student::Student(std::string name,int rollnum,std::string branch){
    this->name=name;
    this->rollNum=rollNum;
    this->branch=branch;
}
std::ifstream& operator>>(std::ifstream &ifs, Student &s)
{
    ifs>>s.name;
    ifs>>s.rollNum;
    ifs>>s.branch;

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
int main()
{
    Student s1 = Student("Kyan",10,"Nairobi");
    std::ofstream o("example.txt");
    o<<s1;

    Student s2 = Student();
    std::ifstream i("example.txt");
    i>>s2;

    std::cout<<s2.name<<std::endl;
    std::cout<<s2.rollNum<<std::endl;
    std::cout<<s2.branch<<std::endl;
    
    
    return 0;
}
/*serialization*/
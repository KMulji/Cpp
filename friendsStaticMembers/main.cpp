#include <iostream>
#include <string>
/*
    Friend Functions.
    Friend function are functions that can access all functions/members(public,private,protected) in a class
    via a object. This is useful in operator overloading.
*/
class Test
{
private:
    int a = 10;

protected:
    int b = 20;

public:
    int c = 30;
    friend void fun1();
};
void fun1()
{
    Test t = Test();
    std::cout << t.a << std::endl;
    std::cout << t.b << std::endl;
    std::cout << t.c << std::endl;
}
/*
    Friend classes
    lets say we want another class to access restricted members(protected and private) of another class via object.
    we make the class that wants to access a freind. Example shown below
*/
class your;
class My
{
private:
    int x = 100;

protected:
    int y = 200;

public:
    int z = 300;
    friend your;
};
class your
{
public:
    My m;
    void fun1()
    {
        std::cout << m.x << std::endl;
        std::cout << m.y << std::endl;
        std::cout << m.z << std::endl;
    }
};
/*
    Static Members
    if we have a class test with a static variable count . Lets say we have two objects o1 and o2, count will be shared by both the variables. it wil occupy
    only one slot in memory. This static variable does not belong to the object is belongs to the class so it can be shared by all objects. We can use this
    concept where all the objects share a similar property like for example all objects of suzuki swift will have the same price.
*/
class Test2
{
private:
    int a;
    int b;

public:
    static int count;
    Test2();
    static int getCount()
    {
        return count;
    }
};
int Test2::count = 0;

Test2::Test2()
{
    int a = 10;
    int b = 10;
    count++;
}

class Student
{
private:
    int rollNo;
    std::string name;
    static int count;

public:
    Student();
    Student(std::string name);
    static int getCount()
    {
        return count;
    }
    std::string getName() { return this->name; }
    int getRoll() { return this->rollNo; }
    friend std::ostream &operator<<(std::ostream &o, Student &s);
};
int Student::count = 1;
Student::Student()
{
    rollNo = count;
    count++;
    this->name = "";
}
Student::Student(std::string name)
{
    this->name = name;
    rollNo = count;
    count++;
}
std::ostream &operator<<(std::ostream &o, Student &s)
{
    return o << s.name << " " << s.rollNo;
}
/*
    Inner and outer classes.
    The outer class can access members of the inner class.
*/
class Outer{
    public:
        int a=10;
        static int b;
    void fun1(){
        i.show();
        std::cout<<i.x<<std::endl;
    }
    class Inner{
        public:
            int x=25;
        void show(){
            std::cout<<b<<std::endl;
        }
    };
    Inner i;
};
int main()
{
    Student s1 = Student("Kyan");
    Student s2 = Student("Tom");
    Student s3 = Student("John");

    std::cout << s1 << std::endl;
    std::cout << s2 << std::endl;
    std::cout << s3 << std::endl;

    Outer::Inner i;
    return 0;
}
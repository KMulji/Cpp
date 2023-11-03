#include <iostream>
/*
    Function Overiding.
    redefining an finction that lives in a parent class in a derived class.
*/
class Parent
{
public:
    void Display()
    {
        std::cout << "Parent Display" << std::endl;
    }
};
class Child : public Parent
{
public:
    void Display()
    {
        std::cout << "Child Display" << std::endl;
    }
};
/*
    Virtual Functions
*/
class Base
{
public:
    /*
        lets assume we have a base class with fun function and a child class
        which inherits from base. Child also has a fun function. When we create a 
        pointer of base class and point it to a object of derived class, and we call
        function fun. It will call the one in the base class. When we add virtual to the 
        fun function in base and when the pointer calls fun it will call the derived function.
        
    */
    virtual void  fun()
    {
        std::cout << "Fun of Base" << std::endl;
    }
};
class Derived : public Base
{
public:
    void fun()
    {
        std::cout << "Fun of Derived" << std::endl;
    }
};
int main()
{
    Base *p;
    Derived d=Derived();
    p=&d;
    p->fun();
}
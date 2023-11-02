#include <iostream>
/*
    inheritance is getting features from a parent class.
*/
class Base
{
private:
    int x;

public:
    Base()
    {
        this->x = 10;
    }
    int showX()
    {
        return x;
    }
    void Display()
    {
        std::cout << this->x << std::endl;
    }
};
class Derived : public Base
{
private:
    int y;

public:
    void Display()
    {
        std::cout << showX() << std::endl;
    }
};
/*
    Constructors in inheritance.

*/
class Bas
{
public:
    Bas() { std::cout << "Default of Base" << std::endl; }
    Bas(int x) { std::cout << "Param of Base" << x << std::endl; }
};
class Der : public Bas
{
public:
    Der() { std::cout << "Default of Derived" << std::endl; }
    Der(int y) { std::cout << "Param of Derived" << y << std::endl; }
    Der(int x, int y) : Bas(x)
    {
        std::cout << "Param of Derived" << y << std::endl;
    }
};
/*
    isA vs hasA
    Lets say we have a class Rectangle and a derived class cuboid. we can say cuboid 
    isA Rectangle. 
    Lets say we have another class table. Table has a rectangle object in the class. we say
    table hasA rectangle.
*/
/*
    Access Specifiers.
    1. public -> this allows other derived classes and objects to access the data members and functions.
    2. private -> this allows only members to the class to access data or functions. Anything outside the class cannot access
    3. protected -> this allows only derived classes to access data members of functions.

    inside class =  you can access private, protected and public.
    inside a derived class = you can access protected and public
    on a object = you can access public only.
*/
/*
    types of inheritance
    1. simple/single inheritance -> B inherits from A.
    2. hierarchical inheritance -> B inherits from A. C inherits from A. D inherits from A.....so on.
    3. multi level inheritance -> B inherits from A. C inherits from B.
    4. multiple inheritance -> C inherits from A and B.

    lets say we have class A. Class B and C inherit from A. and Class D inherits from B and C
    In this situation methods from Class A will be available via class b and c. To avoid this problem of having mu
    ltiple instances of the base class via class B and C. to prevent this we use virtual on class B and C.
    
*/
class A{

};
class B:virtual public A{

};
class C:virtual public A{

};
class D:public B,public C{

};
/*
    Ways of inheritance.
    lets say we have three classes, A,B,C. 
    if B inherits from a using public, then it means protected of A becomes protected in B and public in A becomes
    public in B. 
    If B inherits from A using protected, then the public and protected of A become protected in B.
    If B inherits from A using private, then the public and protected of A become private in B.
*/
int main()
{

    Der d(5, 10);
    return 0;
}
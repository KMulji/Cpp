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
    1. public ->
    2. private ->
    3. protected -> 
*/
int main()
{

    Der d(5, 10);
    return 0;
}
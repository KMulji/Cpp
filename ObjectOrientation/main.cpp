#include <iostream>
/*
    Principles of object orientation
    1. Abstraction -> Allows people to use it without knowing how a class works.
    2. Encapsulation -> data hiding.
    3. Inheritance
*/
/*
    Constructors
    1. Default constructor -> provided by the compiler
    2. non parameter constructor ->
    3. parameter constructor
    4. Copy constructor -> you want to create a object from another object of the same class.
*/
class Rectangle
{
private:
    int length;
    int breadth;

public:
    // default / non parameter constructor
    Rectangle()
    {
        this->length = 0;
        this->breadth = 0;
    }
    // parameter constructor.
    Rectangle(int l, int b)
    {
        this->length = l;
        this->breadth = b;
    }
    // copy constructor.
    Rectangle(Rectangle &r)
    {
        this->length = r.length;
        this->breadth = r.breadth;
    }
};
/*
    Deep copy constructor
    if you deal with additional memory like an array you need to reassign and copy values.
*/
class Test
{
    int size;
    int *p;

    Test(Test &t)
    {
        this->size = t.size;
        p = new int[this->size];
        // copy the values
        for (int i = 0; i < this->size; i++)
        {
            p[i] = t.p[i];
        }
    }
};
/*
    Types of functions in a class

*/
class Rect
{
private:
    int length;
    int breadth;

public:
    //constructors
    Rect();
    Rect(int l, int b);
    Rect(Rect &r);
    // getters and setters
    void setLength(int l);
    void setBreadth(int b);
    int getLength();
    int getBreadth();
    //facilitators
    int area();
    int perimeter();
    // inquiry
    bool IsSquare();

    //destructor
    ~Rect();
};
/*
    Scope resolution
    to refer to functions of a class outside the class use ::
*/
int Rect::area(){
    return this->length*this->breadth;
}
/*
    inline functions -> written in the class definition
*/
/*
    struct vs class
*/
int main()
{

    return 0;
}
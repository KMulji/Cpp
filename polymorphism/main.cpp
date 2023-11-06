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
    virtual void fun()
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
class Car
{
public:
    virtual void start() = 0; // pure virtual function, means derived classes must overide this.

    virtual void stop()
    {
        std::cout << "Car Stopped" << std::endl;
    }
};
class Innova : public Car
{
public:
    void start()
    {
        std::cout << "Innova Started" << std::endl;
    }
    void stop()
    {
        std::cout << "Innova Started" << std::endl;
    }
};
class Swift : public Car
{
public:
    void start()
    {
        std::cout << "Swift Started" << std::endl;
    }
    void stop()
    {
        std::cout << "Swift Started" << std::endl;
    };
};
/*
    Abstract classes
    student activity
*/
/*
    This shape class is an example of an abstract class called an interface.
*/
class Shape
{
public:
    virtual float Area() = 0;
    virtual float Perimeter() = 0;
};

class Rectangle : public Shape
{
private:
    float length;
    float breadth;

public:
    Rectangle();
    Rectangle(float l, float b);
    float Area();
    float Perimeter();
};
class Circle : public Shape
{
private:
    float Radius;

public:
    Circle();
    Circle(float r);
    float Area();
    float Perimeter();
};
Circle::Circle()
{
    this->Radius = 1.f;
}
Circle::Circle(float r)
{
    this->Radius = r;
}
float Circle::Area()
{
    return 3.142f * this->Radius * this->Radius;
}
float Circle::Perimeter()
{
    return 2 * (3.142f * Radius);
}
Rectangle::Rectangle()
{
    length = 1;
    breadth = 1;
}
Rectangle::Rectangle(float l, float b)
{
    this->length = l;
    this->breadth = b;
}
float Rectangle::Area()
{
    return this->length * this->breadth;
}
float Rectangle::Perimeter()
{
    return 2 * (this->length * this->breadth);
}
int main()
{
    Shape *s;
    s = new Rectangle(2.f, 2.f);
    std::cout << "Perimeter is" << s->Perimeter() << std::endl;
    std::cout << "Area is" << s->Area() << std::endl;

    s = new Circle(2.f);
    std::cout << "Circle Perimeter is" << s->Perimeter() << std::endl;
    std::cout << "Circle Area is" << s->Area() << std::endl;
}
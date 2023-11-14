#include <iostream>
#include <memory>
/*
    we can use auto of we dont know the type.
*/
/*
    final keyword can prevent a class from being inherited from. it can also prevent virtual
    functions from being overided. written at the end of class or functions
*/
class Parent final
{
    virtual void show()
    {
    }
};
// this below will throw an error.
// class Child : public Parent
// {
// };
/*
 Lambda expression
*/
template <typename T>
void fun(T f)
{
    f();
}
/*
    smart pointers
    1. unique_ptr; -> only one ptr on the object
    2. shared_ptr; -> many ptr on one object and it has a reference counter.
    3. weak_ptr -> same as share ptr without reference counter.
*/
class Rectangle final
{
private:
    int l;
    int b;

public:
    Rectangle() { ; };
    Rectangle(int l, int b)
    {
        this->l = l;
        this->b = b;
    }
    int Area() { return this->l * this->b; };
};
/*
    Elipsis
*/
int main()
{
    []()
    { std::cout << "Hello" << std::endl; }();
    [](int x, int y)
    { std::cout << x + y << std::endl; }(10, 30);
    int z = [](int x, int y) -> int
    { return x + y; }(40, 50);
    std::cout << z << std::endl;

    int a = 10;
    auto f = [a]()
    { std::cout << a << std::endl; };
    f();
    fun(f);
    std::unique_ptr<Rectangle> p(new Rectangle(10,20));
    std::cout<<p->Area()<<std::endl;
    return 0;
}
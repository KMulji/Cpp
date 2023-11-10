#include <iostream>
/*
    when we allocate an object in the stack, when the object goes out
    of scope then the destructor is automatically called. When we allocate it
    on the heap, we have to call delete object to call the destructor.any
    resources our class uses must be returned in the destructor. E.g heap memory
    freed and files closed. We cannot have multiple destructors.

    in inheritance first the derived class destructor is called then the parent
*/
class Test
{
    int *p;

public:
    Test()
    {
        p = new int[10];
        std::cout << "constructor called test" << std::endl;
    }
    virtual ~Test()
    {
        std::cout << "Destructor called test" << std::endl;
        delete[] p;
    }
};
/*
    Virtual destructors
    we need virtual destructors because of a common problem we face.
    Lets sat we have a pointer of base class pointing on a object of derived
    class which has been created in a heap. when we delete the pointer only the destructor
    of base class is called. to fix this we make the destructor virtual.

*/
class Test2 : public Test
{
public:
    Test2()
    {
        std::cout << "Constructos of test 2 called" << std::endl;
    }
    ~Test2()
    {
        std::cout << "Destructor of test 2 called" << std::endl;
    }
};

int main()
{
    Test *t1 = new Test2();

    delete t1;

    return 0;
}
#include <iostream>
using namespace std;

class Base
{
public:
    void fun1();
    void fun2();
    void fun3();
};
class Derived: public Base{
    public:
        void fun4();
        void fun5();
};
int main()
{
    /*
        if we have a base class pointer, and we point it to a derived class object, we can only 
        call functions present in the base class as shown below.
        you cannot take a derived class pointer and assign it to a object of base class.
    */
    Base *p = new Derived();
    p->fun1();
    p->fun2();
    p->fun3();
    
    return 0;
}
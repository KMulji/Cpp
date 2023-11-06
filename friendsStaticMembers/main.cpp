#include <iostream>
/*
    Friend Functions.
    Friend function are functions that can access all functions/members in a class
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
void fun1(){
    Test t= Test();
    std::cout<<t.a<<std::endl;
    std::cout<<t.b<<std::endl;
    std::cout<<t.c<<std::endl;
}
/*
    Friend classes
    lets say we want another class to access restricted members of another class via object.
    we make the class that wants to access a freind. Example shown below
*/
class your;
class My{
    private:
        int x=100;
    protected:
        int y=200;
    public:
        int z=300;
    friend your;
};
class your{
    public:
        My m;
        void fun1(){
            std::cout<<m.x<<std::endl;
            std::cout<<m.y<<std::endl;
            std::cout<<m.z<<std::endl;
        }
};
int main()
{
    class your y = your();
    y.fun1();

    fun1();
}
#include <iostream>
/*
    we can make functions and classes work with any primitive data type.
    int the example below T can be int,float,double.

*/
/* this is a function template that accepts one type in t*/
template <class T>
T Maximum(T x, T y)
{
    return x > y ? x : y;
}
/*
    this is a template function that accepts one type in t and another type in R.
*/
template <class T, class R>
T add(T x, R y)
{
    return x + y;
}
template<class T>
class Stack
{
private:
    T s[10];
    T top;

public:
    void push(T x);
    T pop();
};
int main()
{
    return 0;
}
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
template <class T>
class Stack
{
private:
    T *s;
    int top;
    int size;
    int length;

public:
    Stack(int size);
    void push(T x);
    T pop();
};

template <class T>
Stack<T>::Stack(int size)
{

    this->size = size;

    this->top = -1;
    this->s = new T[this->size];
}
template <class T>
void Stack<T>::push(T x)
{
    if (top == this->size-1)
    {
        throw std::string("Stack is full");

        return;
    }
    top++;
    this->s[top] = x;
}
template <class T>
T Stack<T>::pop()
{

    if (top == -1)
    {
        throw std::string("Stack is empty");
        return -1;
    }
    
    T temp = this->s[top];
    top--;
    return temp;
}
int main()
{
    Stack<int> s = Stack<int>(5);
    try
    {
        s.push(1);
        s.push(2);
        s.push(3);
        s.push(4);
        s.push(5);
        
        std::cout<<s.pop()<<std::endl;
        std::cout<<s.pop()<<std::endl;
        std::cout<<s.pop()<<std::endl;
        std::cout<<s.pop()<<std::endl;
        std::cout<<s.pop()<<std::endl;
    }
    catch (std::string s)
    {
        std::cout << s << std::endl;
    }

    return 0;
}
#include <iostream>

/*
    There are three types of errors
    1. Syntax Error -> compiler detects.
    2. Logical Error -> you can use a debugger to help find this
    3. Runtime Error ->  caused during runtime of the program. E.g. bad input. no internet.
        these are called exceptions.
*/
void Example1()
{
    int a = 10;
    int b = 0;
    int d = 1;
    try
    {
        if (b == 0)
        {
            throw 101;
        }
        d = a / b;
    }
    catch (int e)
    {
        std::cout << e << std::endl;
    }
}
/*
    All about throw.
    you can throw anything even a class.
    there is an inbuilt exception class in c++. you can write your own and inherit from this.
*/
/*
    All about catch
    we can have many catch blocks for different types.
    catch(...) is known as catch all block.catch all must be the last one.
*/
int main()
{
    Example1();

    return 0;
}
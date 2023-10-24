
#include <iostream>
#include <stdlib.h>
// write a add() function here to add 2 numbers
int add(int x, int y)
{
    return x + y;
}
/*
    find the maximum of three numbers.
*/
int Max(int a, int b, int c)

{
    if (a > b && a > c)
    {
        return a;
    }
    else if (b > c)
    {
        return b;
    }
    return c;
}
/*Calculate m pow n*/
int pow(int m, int n)
{
    int p = 1;
    for (int i = 0; i < n; i++)
    {
        p *= m;
    }
    return p;
}
/*
    Function overloading
    we can over load functions as shown below. please note that return type is not considered in
    function overloading. e.g
        int add2  (int a , int b);
        float add2 (int a, int b);
    the follwing will not work.
*/
// 1 write a Min() function here to Min of 2 integers
int Min(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    return b;
}
// 2 write a Min() function here to Min of 3 integers
int Min(int a, int b, int c)
{
    if (a < b && a < c)
    {
        return a;
    }
    else if (b < c)
    {
        return b;
    }
    return c;
}
// 3 write a Min() function here to Min of 2 floats
float Min(float a, float b)
{
    if (a < b)
    {
        return a;
    }
    return b;
}
/*
Function Template

*/
template<class T>
T max(T a, T b)
{
    if(a>b){
        return a;
    }
    return b;
}
/*
    default arguments
    allows u to have optional arguments.
    c becomes optional.
*/
int sum10(int a,int b,int c=0){
    return a+b+c;
}
/*
    pass by value
    the values are copied into the parameters and are separate from 
*/
int main()
{
    std::cout<<sum10(2,3,7)<<std::endl;
    return 0;
}
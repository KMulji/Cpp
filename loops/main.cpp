#include <iostream>
using std::cout;
/**************************************
     print a multiplication table for n

***************************************/
void MultiplicationTable(int n)
{
    for (int i = 1; i <= 10; i++)
    {
        cout << i << " " << i * n << std::endl;
    }
}
/**************************************
     Return the sum of the first n
     numbers. formula = n(n+1)/2;
     But we want to use a loop.

***************************************/
void SumOfN(int n)
{
    int count = 0;

    for (int i = 0; i <= n; i++)
    {
        count += i;
    }
    cout << count << std::endl;
}
/*
    Return the factorial of n;
*/
void Factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    cout << fact << std::endl;
}
/*

    Find the factors of a number we simply
    go from i to n and divide by i;
*/
void Factors(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << std::endl;
        }
    }
}
/*
    Decide if a number is perfect or not.
    A perfect number is a number whose factors add
    up to the number.
    e.g 6 = 1+2+3
*/
void Perfect(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (sum == 2 * n)
    {
        cout << "Perfect" << std::endl;
        return;
    }
    cout << "Not Perfect" << std::endl;
}
/*
    Find out if n is prime. A prime number is one divisible by 1
    and its self.
*/
void Prime(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        cout << "Prime" << std::endl;
        return;
    }
    cout << "Not Prime" << std::endl;
}
/*
    Display the digits of a number, it can be reversed.
*/
void Digit(int n)
{
    while (n > 0)
    {
        cout << n % 10 << " ";
        n = n / 10;
    }
}
/*
    Given a number, determine if its a armstrong number or not.
    A number is armstrong if it has 3 digits and if the cubic
    sum of all the digits equal to the number. These are called
    3 digit Armstrong.
    e.g 1 5 3 = 1^3 + 5^3 = 3^3 = 153.
*/
void ThreeArmstrong(int n)
{
    int sum = 0;
    int m = n;
    while (n > 0)
    {
        int digit = n % 10;
        int three = digit * digit * digit;
        sum += three;
        n = n / 10;
    }
    if (sum == m)
    {
        cout << "armstrong";
        return;
    }
    cout << "not armstrong";
}
/*
    given a number as a int, return the reverse as a int.
*/
void Reverse(int n)
{
    int number = 0;

    while (n > 0)
    {
        int digit = n % 10;
        number = number * 10;
        number += digit;
        n = n / 10;
    }
    cout << number;
}
/*
    Given a int check if its a palindrome or not.
    e.g 111 is a palindrome and 123 is not.
*/
void Palindrome(int n)
{
    int m = n;
    int rev = 0;

    while (n > 0)
    {
        int digit = n % 10;
        rev = rev*10;
        rev+=digit;
        n=n/10;
    }
    if(rev == m){
        cout<<"palindrome";
        return;
    }else{
        cout<<"not a palindrome";
    }
}
void Gcd(int m,int n){
    while(m!=n){
        if(m>n){
            m=m-n;
        }else if(n>m){
            n=n-m;
        }
    }
    cout<<m;
}
int main()
{

    Gcd(11,7);
    return 0;
}
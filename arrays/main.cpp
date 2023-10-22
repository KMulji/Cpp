#include <iostream>

/*
    Find the sum of all elements in the array
*/
void SumArr(int A[], int n)
{
    int Sum = 0;
    for (int i = 0; i < n; i++)
    {
        Sum += A[i];
    }
    std::cout << Sum;
}
/*
    Find the maximum in an array
*/
void Max(int A[], int n)
{
    int Mx = A[0];
    for (int i = 1; i < n; i++)
    {
        if (A[i] > Mx)
        {
            Mx = A[i];
        }
    }
    std::cout << Mx;
}
/*
    Find the minimum in an array
*/
void Min(int A[], int n)
{
    int Ms = A[0];
    for (int i = 0; i < n; i++)
    {
        if (A[i] < Ms)
        {
            Ms = A[i];
        }
    }
    std::cout << Ms;
}
/*
    return a function that counts the number of positves
    and negatives in an array
*/
void NoPositivesNegatives(int A[], int n)
{
    int NoPos = 0;
    int NoNeg = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] < n)
        {
            NoNeg++;
            continue;
        }
        NoPos++;
    }
}
/*
    Use Linear Search to find a key in the array
*/
void LinearSearch(int A[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (A[i] == key)
        {
            std::cout << i << std::endl;
            return;
        }
    }
    std::cout << -1 << std::endl;
}
/*
    Use Binary Search
*/
void BinSearch(int A[], int n, int key)
{
    int lo = 0;
    int hi = n - 1;
    int mid = 0;
    while (lo <= hi)
    {
        mid = lo + (hi - lo) / 2;
        if (key == A[mid])
        {
            std::cout << mid;
            return;
        }
        else if (key > A[mid])
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid - 1;
        }
    }
    std::cout << -1;
}
/*
Write a program using loops to print the following pattern
    1 2 3 4
    5 6 7 8
    9 10 11 12
    13 14 15 16
*/
void Patten1()
{
    int count = 1;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            std::cout << count++ << " ";
        }
        std::cout << std::endl;
    }
}
/*
    Write a program to print the following pattern
    * - - -
    * * - -
    * * * -
    * * * *
*/
void Pattern2()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i >= j)
            {
                std::cout << "*"
                          << " ";
            }
            else
            {
                std::cout << "-"
                          << " ";
            }
        }
        std::cout << std::endl;
    }
}
/*
    Write a program to print the following pattern
    * * * *
    - * * *
    - - * *
    - - - *
*/
void Pattern2Inv()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (j >= i)
            {
                std::cout << "*"
                          << " ";
            }
            else
            {
                std::cout << "-"
                          << " ";
            }
        }
        std::cout << std::endl;
    }
}

void Pattern3()
{
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(i+j>4-1)
            {
                std::cout<<"*"<<" ";
            }else{
                std::cout<<"-"<<" ";
            }
        }
        std::cout << std::endl;
    }
}
int main()
{
    Pattern3();
    return 0;
}

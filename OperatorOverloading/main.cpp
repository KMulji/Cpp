#include <iostream>
/*
    Operator Overloading

*/
class Complex
{
private:
    int real;
    int imaginary;

public:
    Complex(int r = 0, int i = 0)
    {
        this->real = r;
        this->imaginary = i;
    }
    Complex operator+(Complex x)
    {
        Complex temp;
        temp.real = this->real + x.real;
        temp.imaginary = this->imaginary + x.imaginary;
        return temp;
    }
    friend std::ostream &operator<<(std::ostream &os, Complex &x);
    friend std::istream &operator>>(std::istream &is, Complex &x);
    int getReal()
    {
        return this->real;
    }
    int getImaginary()
    {
        return this->imaginary;
    }
};
// overloaded insertion operator. allows printing complex numbers using <<.
std::ostream &operator<<(std::ostream &os, Complex &x)
{
    os << x.real << "+i" << x.imaginary << std::endl;
    return os;
}

class Complex2
{
private:
    int real;
    int imaginary;

public:
    Complex2(int r = 0, int i = 0)
    {
        this->real = r;
        this->imaginary = i;
    }

    friend Complex2 operator+(Complex2 c1, Complex2 c2);

    int getReal()
    {
        return this->real;
    }
    int getImaginary()
    {
        return this->imaginary;
    }
};
/*
    Friend operator overloading.
    you can pass two complex numbers as a parameter.
*/
Complex2 operator+(Complex2 c1, Complex2 c2)
{
    Complex2 temp;
    temp.real = c1.real + c2.real;
    temp.imaginary = c1.imaginary + c2.imaginary;
    return temp;
}
// Student exercise, create class for rationals
class Rational
{
private:
    int num;
    int den;

public:
    Rational(int num, int den);
    Rational(Rational &r);
    // overloaded plus operator.
    friend Rational operator+(Rational r1, Rational r2);
    // overloaded << operator
    friend std::ostream &operator<<(std::ostream &os, Rational &x);
};
Rational::Rational(int num = 0, int den = 0)
{
    this->num = num;
    this->den = den;
}
Rational::Rational(Rational &r)
{
    this->num = r.num;
    this->den = r.den;
}
Rational operator+(Rational r1, Rational r2)
{
    Rational temp;

    temp.num = (r1.num * r2.den) + (r2.num * r1.den);
    temp.den = (r1.den) * (r2.den);
    return temp;
}
std::ostream &operator<<(std::ostream &os, Rational &x)
{
    return os << x.num << "/" << x.den << std::endl;
}
int main()
{
    Complex c1 = Complex(10, 5);
    Complex c2 = Complex(15, 10);
    Complex c3 = c1 + c2;
    std::cout << c3;

    Rational r1 = Rational(2, 3);
    Rational r2 = Rational(8, 16);
    Rational r3 = r1 + r2;
    std::cout << r3;

    return 0;
}
#include <iostream>
#include "functions.h"

using namespace std;

Polynom::Polynom(int x)
{
    this -> x = x;
    poly = new int[x];
    for(int i = 0; i < x; i++)
        poly[i] = 0;
}

Polynom::Polynom(Polynom & poly2)
{
    x = poly2.x;
    poly = new int[n];
    for(int i = 0; i < x; i++)
        poly[i] = poly2[i];
}

void Polynom::ValueOfPoly(int a)
{
    int a;
    cout << "Vvedite znachenie peremennoy a...";
    cin >> a;
    this -> a = a;
    int y = poly[x-1];
    for(int i = a; i >= 2; i--)
        b = b + poly[i]*pow(a, i);
}

Polynom Polynom::operator*(int a)
{
    Polynom b(x);
    for(int i = 0; i < x; i++)
        b[i] = poly[i] * a;
    return b;
}

Polynom Polynom::operator+(Polynom & poly2)
{
    if (x>=poly2.x)
        a=x;
    else
        a=poly2.x;
    Polynom y(a);
    for(int i = 0; i < poly2.x; i++)
        y[i] += poly2[i];
    for(int i = 0; i < x; i++)
        y[i] += poly[i];
    return y;
}

Polynom Polynom::operator-(Polynom & poly2)
{
    if (x>=poly2.x)
        a=x;
    else
        a=poly2.x;
    Polynom y(a);
    for(int i = 0; i < poly2; i++)
        y[i] -=  poly2[i];
    for(int i = 0; i < x; i++)
        y[i] += poly[i];
    return y;
}

Polynom & Polynom::operator=(Polynom & poly2)
{
    if (this != &poly2)
    {
        delete [] poly;
        x = poly2.x;
        poly = new int[x+1];
        for(int i = 0; i <= x; i++)
            poly[i] = poly2[i];
    }
    return *this;
}

ostream & operator << (ostream & mystream, Polynom &poly2)
{
    int a = poly2.DimensionOfPoly();
    if(a)
    {
        mystream << "(" << poly2[0] <<")*x^" << a;
        for(int b=a-1, i = 1; i<a+1; i++, b--)
            mystream << "+(" << poly2[i] << ")*x^" << b;
    }
    return mystream;
}

istream & operator >> (istream & mystream, Polynom &poly2)
{
    cout << "Vvedite " << poly2.DimensionOfPoly() << "koeffitzienty..." << endl;
    for (int i = 0; i < poly2.DimensionOfPoly(); i++)
        mystream >> poly2[i];
    return mystream;
}

Polynom::~Polynom()
{
    x = 0;
    delete [] poly;
    poly = nullptr;
}

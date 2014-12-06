#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED

#include <iostream>

class Polynom
{
    int *poly;
    int x;
public:
    Polynom() : poly(nullptr), x(0) {};
    Polynom(int x);
    Polynom(Polynom & poly2);

    Polynom operator*(int a);
    Polynom operator+(Polynom & poly2);
    Polynom operator-(Polynom & poly2);
    Polynom & operator=(Polynom & poly2);
    int & operator[](int i)
    {
        return poly[i];
    }
    int DimensionOfPoly()
    {
        return x;
    }
    ~Polynom();

    void ValueOfPoly(int a);
    void ValueOfPoly(int b);
    friend std::ostream & operator << (std::ostream & mystream, Polynom &poly2);
    friend std::istream & operator >> (std::istream & mystream, Polynom &poly2);
};

#endif

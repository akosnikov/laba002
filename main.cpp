//Вариант 5

#include <iostream>
#include "functions.h"

using namespace std;

int main()
{
    int poly, z;
    cout << "Vvedite stepenj polinomov..." << endl;
    cin >> poly;
    Polynom a(poly);
    Polynom b(poly);
    cin >> a;
    cin >> b;
    cout << "Vvedite chislo, na kakoe domnozhatj polinomy..." << endl;
    cin >> z;
    cout << a << endl;
    cout << b << endl;
    cout << "a+b=" << a+b << endl;
    cout << "a-b="<< a-b << endl;
    cout << "a*" << z << "=" << a*z << endl;
    cout << "b*" << z << "=" << b*z << endl;
    cout << "Znacheniya polinomov..." << endl;
    a.ValueOfPoly();
    cout << endl;
    b.ValueOfPoly();
    return 0;
}

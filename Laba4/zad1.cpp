/* Даны стороны прямоугольника  a и b. Найти его площадь S=a*b и периметр P=2*(a+b). */

#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "rus");
    int a = 0, b = 0, s = 0, p = 0;
    cout << "Введите значение первой стороны прямоугольника:\n";
    cout << "a = \t";
    cin >> a;
    cout << "Введите значение второй стороны прямоугольника:\n";
    cout << "b = \t";
    cin >> b;
    s = a*b;
    p = 2*(a+b);
    cout << "Площадь прямоугольника: S = a*b = " << a << "*" << b << "=" << s << "\n";
    cout << "Периметр прямоугольника: P = 2*(a+b) = 2*(" << a << "+" << b << ") = " << p;
}

// Поменять местами содержимое переменных A и B и вывести новые значения A и B.

#include <iostream>
using namespace std;

int main() 
{
    setlocale(0, "rus");
    double a=0,b=0,c=0;
    cout << "Введите значение А и B через пробел: \n";
    cout << "A, B = \t";
    cin >> a >> b;
    c = a;
    a = b;
    b = c;
    cout << "A = " << a << " B = " << b;
}

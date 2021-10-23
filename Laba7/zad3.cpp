#include <iostream>
#include <math.h>
using namespace std;

int main() 
{
    setlocale(0, "rus");
    double x=0,a=0,y=0;
    cout << "Введите значения веса конфет X (кг) и их цену A (в рублях) через пробел: \n";
    cout << "X, A = ";
    cin >> x >> a;
    cout << "Введите значение веса конфет Y (кг) для рассчета их стоимости: \n";
    cout << "Y = ";
    cin >> y;
    cout << "Цена за 1 кг конфет = A/X = " << a/x << "\n";
    cout << "Цена за Y кг конфет = A/X*Y = " << a/x*y;
}  

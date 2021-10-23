#include <iostream>
#include <math.h>
using namespace std;

int main() 
{
    setlocale(0, "rus");
    double a=0,b=0,x=0;
    cout << "Решим линейное уравнение A·x + B = 0\n";
    cout << "Введите значения коэффициентов А и В через пробел: \n";
    cout << "А, В = ";
    cin >> a >> b;
    cout << "x = -B/A = " << -b/a;
}

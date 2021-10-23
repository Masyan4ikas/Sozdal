#include <iostream>
#include <math.h>
using namespace std;

int main() 
{
    setlocale(0, "rus");
    double a1=0,b1=0,c1=0,a2=0,b2=0,c2=0,d=0,x=0,y=0;
    cout << "Решим систему уравнений вида:\n";
    cout << "A1·x + B1·y = C1 \n";
    cout << "A2·x + B2·y = C2 \n";
    cout << "Введите значения A1, B1, C1 через пробел: \n";
    cout << "A1, B1, C1 = ";
    cin >> a1 >> b1 >> c1;
    cout << "Введите значения А2, В2, С2 через пробел: \n";
    cout << "A2, B2, C2 = ";
    cin >> a2 >> b2 >> c2;
    
    cout << "\n Первый шаг(найдем делитель d): \n";
    cout << "d = A1·B2-A2·B1 = " << a1*b2-a2*b1 <<"\n";
    d = a1*b2-a2*b1;
    
    cout << "\n Второй шаг(выведем формулы для нахождения x и y и рассчитаем значения): \n";
    cout << "x = (C1*B2 - C2*B1)/d = " << (c1*b2 -c2*b1)/d << "\n";
    cout << "y = (A1*C2 - A2*C1)/d = " << (a1*c2-a2*c1)/d;
}

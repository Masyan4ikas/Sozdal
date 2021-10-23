#include <iostream>
#include <math.h>
using namespace std;

int main() 
{
    setlocale(0, "rus");
    double a=0,pi=3.14;
    cout << "Введите значение угла α в радианах (π) (0 < α < 2): \n";
    cout << "α = ";
    cin >> a;
    if (a<0 or a>2){
        cout << "Ошибка: величина угла не пренадлежит заданному промежутку";
    }
    else {
        cout << "Значение угла α в градусах: (α*180/π) = " << a*180 << "π градусов или " << a*180/pi << " градусов";
    }
}    


#include <iostream>
#include <math.h>
using namespace std;

int main() 
{
    setlocale(0, "rus");
    double a=0,pi=3.14;
    cout << "Введите значение угла α в градусах (0° < α < 360°): \n";
    cout << "α = ";
    cin >> a;
    if (a<0 or a>360){
        cout << "Ошибка: величина угла не пренадлежит заданному промежутку";
    }
    else {
        cout << "Значение угла α в радианах: (α°*π/180) = " << a/180 << "π радиан или " << a*pi/180 << " радиан";
    }
}  

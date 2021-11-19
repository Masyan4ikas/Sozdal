#include <iostream>
using namespace std;
int main ()
{
    setlocale(LC_ALL, "Rus");
    float a, b;
    cout<<"Введите числа А и В ";
    cin>>a>>b;
    if (a>2 && b<=3)
        cout<<"Верно";
    else cout<<"Неверно";
    return 0;
}

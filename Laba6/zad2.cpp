// Даны переменные A, B, C. Изменить их значения, переместив содержимое A в B, B — в C, C — в A, и вывести новые значения переменных A, B, C.
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    
    setlocale(0, "");
    float a, b, c, t;
    cout << "Введите а - ";
    cin >> a;
    cout << "Введите b - ";
    cin >> b;
    cout << "Введите с - ";
    cin >> c;
    
    t = b;
    b = a;
    a = c;
    c = b;
    
cout << "a - " << a << "b - " << b << "c - " << c;

 
 return 0;
}

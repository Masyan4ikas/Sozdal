/*Найти расстояние между двумя точками с заданными координатами (x1, y1) и (x2, y2)*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() 
{
    cout << ""<< endl;
    cout << "x1"<< endl;
    cout << "y1"<< endl;
    cout << "x2"<< endl;
    cout << "y2"<< endl; 
    cout << ""<< endl;
    cout << "А теперь введите циферки:"<< endl; 

    double x1, y1, x2, y2;

    cin >> x1 >> y1 >> x2 >> y2;
    cout << "s: " << fixed << setprecision(2)
    << sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)) << endl;
    cout << "Отлично!"<< endl; 
    
return 0;
}

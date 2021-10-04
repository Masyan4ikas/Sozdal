// Найти значение функции y = 4(x−3)6 − 7(x−3)3 + 2 при данном значении x

#include <stdio.h>
 
int main()
{
    float x;
    printf("x:");
    scanf ("%f", &x);
 
    float y = 4 * (x - 3) * ( x - 3 ) * ( x - 3 ) * ( x - 3 ) * ( x - 3 ) * ( x - 3 ) - 7 * ( x - 3 ) * ( x - 3 ) * ( x - 3 ) + 2;
 
    printf("y:%f\n",y);
 
    return 0;
}

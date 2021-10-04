/*Даны три точки A, B, C на числовой оси. Найти длины отрезков AC
и BC и их сумму*/

import math
print('Введите A: ')
    A = float(input())
print('Введите B: ')
    B = float(input())
print('Введите C: ')
    C = float(input())
        AC=math.fabs(A-C)
    print('Расстояние отрезка AC =: ',AC)
        BC=math.fabs(B-C)
    print('Расстояние отрезка BC =: ',BC)
        Sum=AC+BC
    print('Сумма отрезков AC и BC =: ',Sum)

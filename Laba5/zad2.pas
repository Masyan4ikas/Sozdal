//Даны три точки A, B, C на числовой оси. Найти длины отрезков ACи BC и их сумму.

var
x1, x2, x3, AC, BC: real;
begin
write('Введите A: ');
    readln(x1);
write('Введите B: ');
    readln(x2);
write('Введите C: ');
    readln(x3);
        AC := abs(x3 - x1);     //расстояние между A и C 
        BC := abs(x3 - x2);     //расстояние между B и C 
    writeln(' AC = ', AC);
    writeln(' BC = ', BC);
    writeln(' AC + BC = ', AC + BC);
readln
end.

// Даны три точки A, B, C на числовой оси. Точка C расположенамежду точками A и B. Найти произведение длин отрезков AC и BC

var
x1, x2, x3, AC, BC: real;

begin
writeln('Введите точки A, B, C: ');
readln(x1, x2, x3);
AC := abs(x3 - x1); //расстояние A и C 
BC := abs(x3 - x2); //расстояние B и C 
writeln(' AC * BC = ', AC * BC);
readln
end.

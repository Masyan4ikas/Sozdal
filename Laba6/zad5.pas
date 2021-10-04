// Найти значение функции y = 4(x−3)6 − 7(x−3)3 + 2 при данном значении x

var
x, y: real;
begin
write('x = ');
readln(x);

    x := x - 3; // Уменьшаем x на 3 
    x := x * sqr(x); // 3^x 
    y := 4 * sqr(x) - 7 * x + 2;
    
writeln('y = ', y);
readln
end.

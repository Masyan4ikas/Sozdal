//Найти значение функции y = 3x6 − 6x2 − 7 при данном значении x

var
x, y: real;

begin
write('x = ');
readln(x);
y := 3 * sqr(x * sqr(x)) - 6 * sqr(x) - 7;
writeln('y = ', y);
readln
end.

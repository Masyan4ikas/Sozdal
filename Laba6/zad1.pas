//Поменять местами содержимое переменных A и B и вывести новые значения A и B.
var
A, B, v: real;
begin
write('Введите A: ');
readln(A);
write('Введите B: ');
readln(B);

v := A; 
A := B; 
B := v; 

writeln('Результат:');
writeln(' A = ', A, ', B = ', B);
readln
end.  

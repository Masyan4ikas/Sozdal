//Даны переменные A, B, C. Изменить их значения, переместив содержимое A в C, C — в B, B — в A, и вывести новые значения переменных A, B, C.

var
  A,B,C,TempR: Real;
begin
  Write('Введите A: ');
  Readln(A);
  Write('Введите B: ');
  Readln(B);
  Write('Введите C: ');
  Readln(C);
  TempR:=A;
  A:=C;
  C:=B;
  B:=TempR;
  Writeln(' A = ',A);
  Writeln(' B = ',B);
  Writeln(' C = ',C);
end.

/*Даны два ненулевых числа. Найти сумму, разность, произведение и
частное их модулей.
*/

var a, b, s : real;

    r, p, d : real;
begin

   write ('Пожалуйста, введите 1-e число - ');
   readln (a);
   write ('Пожалуйста, введите 2-e число - ');
   readln (b);

   s:= a+ b; //Cчитаем сумму чисел.
   r := a - b; //Считаем разность чисел.
   p := a* b; //Считаем их произведение.
   d := a/b; //Считаем их частное

   writeln ('сумма =', s);
   writeln ('разность =', r);
   writeln ('произведение =', p);
   writeln ('частное = ', d);
   readln

end.

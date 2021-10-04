// Даны координаты трех вершин треугольника: (x1, y1), (x2, y2), (x3, y3). Найти его периметр и площадь
var x1, x2, x3, y1, y2, y3 ,P, S, a, b, c:real;
function St(a1,b1,c1,d1:real):real;
begin
St:=sqrt(sqr (a1 - c1) + sqr (b1 - d1));
end;
begin
    write('x1='); 
    readln(x1);
    
    write('y1='); 
    readln(y1);
    
    write('x2='); 
    readln(x2);
    
    write('y2='); 
    readln(y2);
    
    write('x3='); 
    readln(x3);
    
    write('y3='); 
    readln(y3);
    
        a:=St(x1,y1,x2,y2);
        b:=St(x1,y1,x3,y3);
        c:=St(x2,y2,x3,y3);
        P:=a+b+c;
        writeln('P=',P:4:2);
        P:=P/2;
        S:=sqrt(P*(P-a)*(P-b)*(P-c));
        
writeln('S=',S:4:2);

end.

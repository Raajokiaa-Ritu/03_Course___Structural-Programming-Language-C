#include<stdio.h>
int main(){

 int value = -5;///absolute value : abs(n)
 printf("absolute value: %d\n", abs(value));

 double number = 101;///square root : sqrt(n)
 printf("Square root: %.2lf\n", sqrt(number));

 double a=5, b=2;///power function: pow(a,b)
 printf("power(a,b) : %.2lf\n\n", pow(a,b));

 printf("log(n) : %lf\n", log(number));///log(n)
 printf("log10(n) : %lf\n\n", log10(number));

 double n=90;///sin(), cos(), tan()
 printf("sin(n) : %lf\n", sin(n));
 printf("cos(n) : %lf\n", cos(n));
 printf("tan(n) : %lf\n\n", tan(n));

///round(), trunc(), ceil(), floor()
 printf("round(n) : %.2lf\n", round(11.2));
 printf("round(n) : %.2lf\n", round(11.5));
 printf("trunc(n) : %.2lf\n\n", trunc(7.5));

/// ceil(), floor()
 printf("ceil(n) : %.2lf\n", ceil(2.7));
 printf("floor(n) : %.2lf\n\n", floor(2.7));
 printf("ceil(n) : %.2lf\n", ceil(4.3));
 printf("floor(n) : %.2lf\n", floor(4.3));
}
/*
sample i/o:
absolute value: 5
Square root: 10.05
power(a,b) : 25.00

log(n) : 4.615121
log10(n) : 2.004321

sin(n) : 0.893997
cos(n) : -0.448074
tan(n) : -1.995200

round(n) : 11.00
round(n) : 12.00
trunc(n) : 7.00

ceil(n) : 3.00
floor(n) : 2.00

ceil(n) : 5.00
floor(n) : 4.00

*/

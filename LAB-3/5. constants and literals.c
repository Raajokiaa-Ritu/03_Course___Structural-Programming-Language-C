#include<stdio.h>
#define month 12
#define PI 3.1416

const int ar=15;
const float age=25.5;
const double d;

int main()
{
    const int ar=5;
    //ar = 6; // cannot to change

    printf("constant variable ar : %d\n\n", ar);
    printf("constant variable age : %f\n\n", age);

    scanf("%lf", &d);
    printf("constant variable d : %lf\n\n", d);
    //d =45;// cannot to change

    printf("month : %d\n", month);
    printf("value of pi : %f\n", PI);



}

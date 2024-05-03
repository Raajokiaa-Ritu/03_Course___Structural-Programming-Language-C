#include<stdio.h>
/*
area of rectangle: h * w
area of triangle:(1/2) * b * h
area of circle pi * r * r
area of square: a * a
*/
int main(){

    ///area of rectangle: h * w
    int h,w;
    printf("Enter H and W : ");
    scanf("%d %d", &h, &w);
    printf("area of rectangle: %d\n\n", h, w);

    ///area of triangle:(1/2) * b * h
    /// 1/2 means 0.5 , right?
    int base, height;
    printf("Enter base and height : ");
    scanf("%d %d", &base, &height);
    printf("area of triangle: %f\n\n", (0.5 * base * height));

    ///area of circle pi * r * r
    int r;
    printf("Enter radious : ");
    scanf("%d", &r);
    printf("area of circle: %f\n\n", (3.1416 * r * r));

    ///area of square: a * a
    int lenght;
    printf("Enter length : ");
    scanf("%d", &lenght);
    printf("area of circle: %d\n\n", (lenght * lenght));

}

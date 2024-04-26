#include<stdio.h>

int main()
{
    int id1, id2, id3;
    int a,b,c,d;
    ///type=1
    id1 = 5;
    id2 = 102;
    id3 = id2;

    id2 = id1;
    id1 = id2;

    printf("id1 = %d\n", id1);
    printf("id2 = %d\n", id2);
    printf("id3 = %d\n\n", id3);

    ///type=2
    a = 61;
    a = 23;
    printf("a = %d\n\n", a);
    a = 78;
    a = 32;
    printf("a = %d\n\n", a);










}

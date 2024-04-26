#include<stdio.h>

/*
area = height * width
perimeter = 2 * ( height + width )

*/

int main()
{
    int height;
    printf("Enter Height : ");
    scanf("%d", &height);

    int width;
    printf("Enter Width : ");
    scanf("%d", &width);

    int area;
    area = height * width;

    int perimeter;
    perimeter  = 2 * ( height + width );

    printf("\nArea : %d\n\n", area);

    printf("perimeter : %d\n\n", perimeter);

    printf("Area is : %d \nPerimeter is : %d\n\n", area, perimeter);


    /*
    int height, width, area, perimeter;
    scanf("%d %d", &height, & width);

    */


}

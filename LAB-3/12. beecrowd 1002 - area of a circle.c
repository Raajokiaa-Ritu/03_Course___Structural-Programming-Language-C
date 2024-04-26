#include <stdio.h>

int main() {

    double r;
    scanf("%lf", &r);

    double area = (r * r) * 3.14159;

    printf("A=%0.4lf\n",area);

    return 0;
}

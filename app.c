#include <stdio.h>
#include <math.h>
int main() {

    float a;
    float b;

    printf("Enter the first number: ");
    scanf("%f", &a);

    printf("Enter the second number: ");
    scanf("%f", &b);

    printf("%f + %f = %f\n", a,b,a+b);
    printf("%f - %f = %f\n", a,b,a-b);
    printf("%f * %f = %f\n", a,b,a*b);
    printf("%f / %f = %f\n", a,b,a/b);
    return (0);
}
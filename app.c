#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[]) {

    int a = atoi(argv[1]); // atoi converts a string to an integer
    // printf("Type an integer: ");
    // scanf("%d", &a);
    if (a > 10) {
        printf("%d is greater than 10.\n",a);
    }
    else if(a <= 10) {
        printf("%d is less than or equal to 10.\n",a);
    }
    else 
    {
        printf("This is the else statement.\n");
    }

    return (0);
}
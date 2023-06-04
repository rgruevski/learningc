#include <stdio.h>

int main() {

    int x;
    int y = 5;
    int z;
    printf("Input an integer to be subtracted from 5:");
    scanf("%d", &x);
    z = x - y;
    printf("%c\n",z);
    printf("%d - %d = %d\n",x,y,z);

    return (0);
}
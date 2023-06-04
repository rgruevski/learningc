#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[]) {

    int x;
    for(x=0;x<20;x++)
        printf("%d\n",x+1);

    x=-10;
    while(x<=10) {
        printf("%d\n",x);
        x++;
    }

    return (0);
}
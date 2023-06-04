#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[]) {

    char c;

    c = 'A';
    do
    {
        putchar(c);
        c++; // iterates on the indexes of the alphabet
        if(c>10) {
            break;
        }
    }
    while (c != 'Z');
    putchar('\n');

    return (0);
}
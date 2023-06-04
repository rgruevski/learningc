#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[]) {

    char a = argv[1][0];
    for (int i = 1; i < argc; i++) {
        printf("Argument %d: %s\n", i, argv[i]);
    }

    switch(a) {
        case 'A':
            printf("The letter is A.\n");
            break;
        case 'B':
            printf("The letter is B.\n");
            break;
        case 'C':
            printf("The letter is C.\n");
            break;
        default:
            printf("Input A, B, or C.\n");
    }

    return (0);
}
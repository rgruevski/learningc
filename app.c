#include <stdio.h>

int main() {

    char input[64]; // 15 is the maximum number of characters that can be stored in the array

    printf("Instructions: ");
    fgets(input, 64, stdin); // 64 is the maximum number of characters that can be stored in the array, stdin is the standard input.
    puts("Thank you, here are your instructions:");
    puts(input); // prints the string

    return (0);
}
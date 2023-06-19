#include <stdio.h>
#define INPUT_MAX 16
int main(int argc, char *argv[])
{
    char input[INPUT_MAX];

    printf("Instructions: ");
    fgets(input,INPUT_MAX,stdin);
    puts("Thank you! Here is your input:");
    puts(input);

    return (0);
}
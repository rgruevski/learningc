#include <stdio.h>

int main() {

    char x;
    printf("Type a character: ");
    
    scanf("%c",&x); // %c represents character 
    printf("You entered: '%c'.\n",x);

    return (0);
}
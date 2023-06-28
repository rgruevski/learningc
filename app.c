#include <stdio.h>
#include <stdlib.h>

#define SIZE 512

int main()
{
    char *name;
    name = malloc(sizeof(char)*SIZE);
    if( name == NULL)
    {
        puts("Memory allocation failed");
        return(1);
    }

    printf("Enter your name: ");
    fgets(name,SIZE,stdin);
    printf("Pleased to meet you, %s", name);

    return (0);
}
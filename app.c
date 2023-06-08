#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void blorf(int x);

int main(int argc, char *argv[]) 
{

    puts("The main() function always runs first");
    blorf();
    blorf();
    puts("Thanks, blorf(), I needed that.");

    return (0);
}

void blorf(void) //   
{
    if(x < 10)
        printf("The value %d is less than 10\n", x);
    else if(x > 10)
        printf("The value %d is greater than 10\n", x);
    else
        printf("The value %d is equal to 10\n", x);
}
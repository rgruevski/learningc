#include <stdio.h>
#define MEALS 3
int main(int argc, char *argv[])
{
    char hello[] = "Greetings, earthling!\n";
    int n;

    n = 0;
    while(hello[n] != '\0')
    {
        putchar(hello[n]);
        n++;
    }

    return (0);
}
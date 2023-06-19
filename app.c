#include <stdio.h>
#define MEALS 3
int main(int argc, char *argv[])
{
    int calories[MEALS];
    int x,total;

    total = 0;
    puts("Calorie Counter");

    for (x = 0; x < MEALS; x++)
    {
        printf("Calories at meal %d: ", x + 1);
        scanf("%d", &calories[x]);
        total += calories[x];
    }
    printf("You had a total of %d calories.\n", total);

    return (0);
}
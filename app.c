#include <stdio.h>
#define MEALS 3
int main(int argc, char *argv[])
{
    int grid[3][3];
    int row,col;

    for(row=0;row<3;row++)
        for(col=0;col<3;col++)
            grid[row][col] = row*col;

    grid[2][2] = 99;

    for(row=0;row<3;row++)
        for(col=0;col<3;col++)
            printf("grid[%d][%d] = %d\n",row,col,grid[row][col]);
            putchar('\n');

    return (0);
}
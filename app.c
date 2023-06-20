#include <stdio.h>
#include <string.h>
int main()
{
    struct date {
        int year;
        int month;
        int day;
    };
    struct person {
        char name[32];
        struct date birthday;
    };
    struct person friend;

    strcpy(friend.name, "Robert Gruevski");
    friend.birthday.year = 1993;
    friend.birthday.month = 1;
    friend.birthday.day = 2;

    printf("My friend %s was born on %d/%d/%d\n",
        friend.name,
        friend.birthday.year,
        friend.birthday.month,
        friend.birthday.day
    );

    return (0);
}
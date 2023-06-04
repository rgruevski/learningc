#include <stdio.h>

int main() {

    char password[15]; // 15 is the maximum number of characters that can be stored in the array

    printf("Enter new password...");
    scanf("%s", password); // %s is a format specifier for a string
    printf("The password is: %s\n", password);

    return (0);
}
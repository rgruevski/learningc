#include <stdio.h>
// argc is the number of arguments passed into the program
// argv is an array of pointers to the arguments
int main(int argc, char *argv[]) {

  for (int i = 1; i < argc; i++) {
    printf("Argument %d: %s\n", i, argv[i]);
  }

  return 0;
}
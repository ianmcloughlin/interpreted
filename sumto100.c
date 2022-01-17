#include <stdio.h>

int main(int argc, char *argv[]) {
  // Running total.
  int total = 0;

  // Loop through integers from 0 to 100.
  for (int i = 0; i < 101; i++)
    total = total + i;
  
  // Print total.
  printf("%d\n", total);

  return 0;
}


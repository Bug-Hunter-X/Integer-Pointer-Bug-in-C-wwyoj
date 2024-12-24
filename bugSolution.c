#include <stdio.h>

int main() {
  int x = 5;
  int *ptr = &x;

  // Check if the pointer is valid before dereferencing
  if (ptr != NULL) {
    *ptr = 10;
  } else {
    fprintf(stderr, "Error: Null pointer dereference\n");
    return 1; 
  }
  printf("%d\n", x);
  return 0;
} 
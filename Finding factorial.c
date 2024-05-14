#include <stdio.h>
int main() {
  int a;
  printf("Enter a number: ");
  scanf("%d", &a);
  int mult = 1;
  for (int b = 1; b <= a; b++) {
    mult *= b;
  }
  printf("Factorial of %d is = %d", a, mult);
  return 0;
}
#include <stdio.h>

int main() {
  int a, b, c, e, i; 
  a = 0;
  b = 1;
  e = 0;
  printf("Enter the number: \n");
  scanf("%d", &c);
  for (i = 1; i < c; i++) {
    printf("%d ", e);
    e = a + b;
    a = b;
    b = e;
  }
  return 0;
}
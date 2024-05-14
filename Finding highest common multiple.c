#include <stdio.h>
int main() {
  int a, b, c;
  printf("Enter the value of a and b: ");
  scanf("%d%d", &a, &b);
  if (a < b) {
    c = a;
  } else {
    c = b;
  }
  if (a % c == 0 && b % c == 0) {
    printf("GCd= %d", c);
  } else {
    printf("GCD= 1");
  }
  return 0;
}

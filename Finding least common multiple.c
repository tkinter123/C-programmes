#include <stdio.h>
int main() {
  int a, b, c;
  printf("Enter the value of a and b\n");
  scanf("%d%d", &a, &b);

  if (a > b) {
    c = a;
    if (a % c == 0 && c % b == 0) {
      printf("lcm= %d", c);

    } else if (b > a) {
    c = b;
    if (b % c == 0 && c % a == 0) {
      printf("lcm= %d", c);

    } else {
      printf("lcm= %d", a * b);
    }
 
    }
  }

  return 0;
}

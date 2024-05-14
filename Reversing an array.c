#include <stdio.h>
int main() {

  int b, i;
  printf("Enter the number of digits: \n");
  scanf("%d", &b);
  int a[b];
  for (i = 0; i < b; i++) {
    printf("Enter number %d: \n", i + 1);
    scanf("%d", &a[i]);
  }

  for (i = 0; i < b; i++) {
    printf("Number %d is: %d\n", i + 1, a[i]);
  }
  printf("The reversed array is : \n");
  for (int j = b - 1; j >= 0; j--) {
    printf("%d", a[j]);
  }
  return 0;
}
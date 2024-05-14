#include <stdio.h>
int main() {
  int subject[7], i;
  for (i = 0; i < 7; i++) {
    printf(" Enter your score in %d subject: \n", i + 1);
    scanf("%d", &subject[i]);
  }

  int sum = 0;
  for (i = 0; i < 7; i++) {
    sum += subject[i];
  }
  float Average = sum / 7;
  for(i=0; i<7; i++) {
  printf("Your number in subject %d is: %d \n", i + 1, subject[i]);
  }
  printf("Your total score is:%d \n", sum);
  printf("Your average score is: %.2f", Average);

  return 0;
}
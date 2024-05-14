#include <stdio.h>
int main() {
  int x;
  printf("Enter the size of array: ");
  scanf("%d",&x);
  int arr[x];
  for(int i=0; i<x; i++) {
    printf("Input number %d:",i+1);
    scanf("%d",&arr[i]);
    }
  for(int i=0; i<x; i++) {
    printf("Number %d is: %d \n",i+1,arr[i]);
  }
  int y;
  printf("What action would you like to perform? \n 1. Addition.\n 2. Substraction.\n 3. Multiplication.\n 4. Division\n");
  scanf("%d",&y);
  if(y==1)
  {
    int add = 0;
    for(int i=0; i<x; i++) { 
      add += arr[i];
    }
    printf("The addition is %d",add);
  }
  else if(y==2)
  {
    int sub = 0;
    for(int i=0; i<x; i++) {
      sub -= arr[0];
    }
      printf("The substraction is : %d",sub);
    }
    else if(y=3)
  {
    int mult = 1;
    for(int j=0; j<x; j++) {
      mult *= arr[j];
    }
    printf("The multiplication is %d",mult);
  }
  return 0;
}
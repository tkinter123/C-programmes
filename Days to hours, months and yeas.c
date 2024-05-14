#include <stdio.h>

int main() {
  printf("Hey, It's a calculator which can calculate years, months and hours "
         "from days.\n");
  int d;
  printf("Input the number of days: ");
  scanf("%d", &d);
  int y = d / 365;
  int m = (d - (y * 365)) / 30;
  int w= (d-(y*365)-(m*30))/7;
  printf("Year = %d\nMonth = %d\nWeek = %d",y, m, w);
  return 0;
}
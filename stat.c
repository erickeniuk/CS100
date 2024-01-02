#include <stdio.h>

int main(void) {

  int a, b, c;



  printf("Typee in three numbers...we'll average them\n");

  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);

  double average;
  average = (a + b + c) / 3.0;

  printf("Average of your numbers is... %lf\n", average);

  return 0;
}

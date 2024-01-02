#include <stdio.h>

int main(void) {
  int a, b;
  printf("Enter a number \n");
  scanf("%d", &a);
  printf("Enter another number \n");
  scanf("%d", &b);

  double avg;
  avg = (a + b) / 2.0;
  printf("Avg is %lf\n", avg);
  return 0;
}

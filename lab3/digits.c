#include <stdio.h>

int main(void) {

  int num;
  int total = 0;
  int temp;

  printf("Enter a number: ");
  scanf("%d", &num);

  while ((num/10) != 0) {
      temp = num % 10;
      total = total + temp;
      num = num / 10;}

  total = total + num;

  printf("The sum of your digits is %d\n", total);

  return 0;
}

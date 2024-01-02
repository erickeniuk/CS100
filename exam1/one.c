#include <stdio.h>
#include <string.h>

int main(void) {

int number;
int countFive = 0;
int countNeg = 0;

printf("Enter a number: ");
scanf("%d", &number);

while ( ! feof(stdin) ) {
  if ((number > 0) && ((number % 5) == 0))
  countFive = countFive + 1;
  if ((number < 0) && (number >= -100))
  countNeg = countNeg + 1;
  printf("Enter another number please... ");
  scanf("%d", &number);
}

printf("\n");
printf("%d positive multiples of 5\n", countFive);
printf("%d small negative values\n", countNeg);

return 0;
}

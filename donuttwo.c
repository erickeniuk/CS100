//integer and doubles division

#include <stdio.h>

int main (void) {
  int cal;
  printf("how many calories would you like to eat? \n");
  scanf("%d", &cal);
  if (cal < 0)
    printf("Enter a positive num\n");
  else {
    double num;
    num = cal / 190.0;
    printf("Eat %lf donuts\n", num);
  }
  return 0;
}

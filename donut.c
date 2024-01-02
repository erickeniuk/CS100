#include <stdio.h>

int main(void) {
  double plain, filled;
  printf("How many plain donuts did you eat?\n");
  scanf("%lf", &plain);
  printf("How many filled? \n");
  scanf("%lf", &filled);
  double calories;
  // each donut is 190 calories, filled are 350 calories
  calories = (plain * 190) + (filled * 350);

  printf("You consumed %lf calories\n", calories);
  return 0;
}

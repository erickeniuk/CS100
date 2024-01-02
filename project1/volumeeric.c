/*
  Project by Eric Keniuk
  January 26th, 2018
  Prints off the value and volume of money in your pocket!
*/

#include <stdio.h>

int main(void) {

  printf("Let's calculate the value and volume of money you have!\n");

  int twenties, tens, fives, ones, quarters, dimes, nickels, pennies;

  printf("Enter the number of $20s you have: \n");
  scanf("%d", &twenties);
  printf("Enter the number of $10s you have: \n");
  scanf("%d", &tens);
  printf("Enter the number of $5s you have: \n");
  scanf("%d", &fives);
  printf("Enter the number of $1s you have: \n");
  scanf("%d", &ones);
  printf("Enter the number of quarters you have: \n");
  scanf("%d", &quarters);
  printf("Enter the number of dimes you have: \n");
  scanf("%d", &dimes);
  printf("Enter the number of nickels you have: \n");
  scanf("%d", &nickels);
  printf("Enter the number of pennies you have: \n");
  scanf("%d", &pennies);
  printf("\n");

  int dollars;
  int cents;
  double volume;
  double coinvolume;

  dollars = (20 * twenties) + (10 * tens) + (5 * fives) + (ones);
  cents = (25 * quarters) + (10 * dimes) + (5 * nickels) + (pennies);
  volume = ((2.61 * 2.54) * (6.14 * 2.54) * (0.0043 * 2.54)) * (twenties + tens + fives + ones);
  coinvolume = ((3.14159 * 1.21285 * 1.21285 * .175) * quarters)
  + ((3.14159 * .89535 * .89535 * .135) * dimes)
  + ((3.14159 * 1.06045 * 1.06045 * .195) * nickels)
  + ((3.14159 * .9525 * .9525 * .152) * pennies);

  printf("You have %d dollars in bills and %d cents in change.\nThe volume of your bills is %lf cubic centimeters.\nThe volume of your change is %lf cubic centimeters.\n", dollars, cents, volume, coinvolume);

  /* Sample output
Let's calculate the volume of money you have!
Enter the number of $20s you have:
2
Enter the number of $10s you have:
3
Enter the number of $5s you have:
2
Enter the number of $1s you have:
5
Enter the number of quarters you have:
3
Enter the number of dimes you have:
4
Enter the number of nickels you have:
6
Enter the number of pennies you have:
7

You have 85 dollars in bills and 152 cents in change.
The volume of your bills is 13.550638 cubic centimeters.
The volume of your change is 10.952270 cubic centimeters.

*/

  return 0;
}

#include <stdio.h>
// theres a comment beside all the things i think are wrong, also i think my coin volume is off
int main(void) {

  int twenties;
  int tens;
  int fives;
  int ones;
  int quarters;
  int dimes;
  int nickels;
  int pennies;
  int totalBills;
  int totalCents;
  double billVolume;
  double coinVolume;


  printf("Enter the number of $20s you have:");
  scanf("%d", &twenties);

  printf("Enter the number of $10s you have:");
  scanf("%d", &tens);

  printf("Enter the number of $5s you have:");
  scanf("%d", &fives);

  printf("Enter the number of $1s you have:");
  scanf("%d", &ones);

  printf("Enter the number of quarters you have:");
  scanf("%d", &quarters);

  printf("Enter the number of dimes you have:");
  scanf("%d", &dimes);

  printf("Enter the number of nickels you have:");
  scanf("%d", &nickels);

  printf("Enter the number of pennies you have:");
  scanf("%d", &pennies);

  totalBills = 20 * twenties + 10 * tens + 5 * fives + ones;
  totalCents = 25 * quarters + 10 * dimes + 5 * nickels + pennies;

  printf("You have %d dollars in bills and %d cents in change\n", totalBills, totalCents);


  billVolume = ((2.61 * 2.54) * (6.14 * 2.54) * (0.0043 * 2.54) * (twenties + tens + fives + ones));

    /*
    V = l * w * h
    2.61 inches wide and 6.14 inches long and 0.0043 inches thick; multiply by 2.54 centimeters
    Conversion from inches to centimeters: (2.61 inches/1) * (2.54 centimeters/ 1 inches) =  6.6548 centimeters
  */

  printf("The volume of your bills is %lf cubic centimeters.\n", billVolume);

  coinVolume = ((3.14159 * ((19.05/20)*(19.05/20)) * (1.52/10)) * pennies)
  + ((3.14159 * ((21.21/20)*(21.21/20)) * (1.95/10)) * nickels)
  + ((3.14159 * ((17.91/20)*(17.91/20)) * (1.35/10)) * dimes)
  + ((3.14159 * ((24.26/20)*(24.26/20)) * (1.75/10)) * quarters);

  /*
  convert mm to cm and divide
  19.05 mm diameter (1/2) * (1mm/1) * (1cm/mm) = .9525 cm
  height = 1.52mm * (1cm/10mm)
  ((3.14159 * ((diameter in mm/20)^2) * (thickness in mm/10)* coins)
  */

  printf("The volume of your change is %lf cubic centimeters.\n", coinVolume);

return  0;

}

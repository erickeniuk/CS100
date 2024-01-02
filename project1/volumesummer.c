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

  totalBills =  20*twenties + 10*tens + 5*fives + ones;
  totalCents = 25*quarters + 10*dimes +5*nickels + pennies;

  printf("You have %d dollars in bills and %d cents in change\n", totalBills, totalCents); // i know that this isnt right i just dont know how to type it

  billVolume = (0.06890922 * 2.54 * twenties) + (0.06890922 * 2.54
    * tens) + (0.06890922 * 2.54 * fives) + (0.06890922 * 2.54 * ones); // not sure if i did this right

  printf("The volume of your bills is %lf\n", billVolume);

  coinVolume = (3.14159 * (0.140635 * 2.54) * (2.54 * 0.05984252));

  printf("The volume of your coins is %lf\n", coinVolume);

return  0;
}

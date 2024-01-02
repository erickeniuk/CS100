#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void) {

    double wage;
    int hours;

    printf("We're gonna calculate your weekly pay...\n");
    printf("Enter your hourly wage, and then enter your hours worked!\n");
    printf("Wage: $");
    scanf("%lf", &wage);
    printf("Hours: ");
    scanf("%d", &hours);

    double regulartime, overtime, doubletime;
    double total;

    if (hours <= 40) {
        regulartime = wage * hours;
        printf("Your weekly pay is %lf!\n", regulartime);}

    else if (hours > 40 && hours <= 50) {
        regulartime = wage * 40.0;
        hours = hours - 40;
        overtime = hours * wage * 1.5;
        total = overtime + regulartime;
        printf("Your weekly pay is %lf\n", total);}

    else if (hours > 50) {
            regulartime = wage * 40.0;
            overtime = 10 * wage * 1.5;
            hours = hours - 50;
            doubletime = hours * 2.0 * wage;
            total = overtime + regulartime + doubletime;
            printf("Your weekly pay is %lf\n", total);}



return 0;

}

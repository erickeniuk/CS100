#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void) {

    int temp, wind;
    double windChill;

    printf("Let's calculate the wind chill for today!\n");
    printf("Enter the temperature in Fahrenheit\n");
    scanf("%d", &temp);
    printf("Enter the wind speed in MPH\n");
    scanf("%d", &wind);


    windChill = 35.74 + (0.6215 * temp) - (35.75 * pow(wind, 0.16)) + (0.4275 * temp * pow(wind, 0.16));

    printf("The wind chill today is %lf degrees.\n", windChill);


return 0;
}

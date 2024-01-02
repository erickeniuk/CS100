#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main (void) {
    FILE *data1 = fopen("data1", "r");
    FILE *data2 = fopen("data2", "r");
    int num1, num2;

    fscanf(data1, "%d", &num1 );
    fscanf(data2, "%d", &num2 );

  while ( (! feof(data1 )) && (! feof(data2) ) ) {

    if (num1 < num2) {
    printf("%d ", num1);
    fscanf(data1, "%d ", &num1 );}

    if (num1 > num2) {
    printf("%d ", num2);
    fscanf(data2, "%d", &num2 );}

    if (num1 == num2) {
      printf("%d ", num1);
      fscanf(data1, "%d", &num1 );
      fscanf(data2, "%d", &num2 );
    }
}

while ( ! feof(data1) ) {
    printf("%d ", num1);
    fscanf(data1, "%d", &num1);}

while (! feof(data2) ) {
    printf("%d ", num2);
    fscanf(data2, "%d", &num2);
}

fclose(data1);
fclose(data2);
printf("\n");

}

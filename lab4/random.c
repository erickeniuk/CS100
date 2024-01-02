#include <stdio.h>
#include <stdlib.h>

int main(void) {

int number;
int num[10] = {0};
int random;
int count = 0;
int a;
srand(0);

printf("Enter the number of values you'd like to generate: ");
scanf("%d", &number);

for (a=0; a<number; a++){
  random = rand() % 10;
  ++num[random];

}

for (a=0; a<10; a++) {
  if (num[a] != 0)
  count++;
}
printf("%d random numbers generated %d out of 10 possible values\n", number, count);

return 0;
}

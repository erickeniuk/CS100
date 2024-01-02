#include <stdio.h>

int main(void) {

  int num, max, min, range;

  printf("\nEnter a number.\nIf you'd like to stop entering numbers, enter a zero: ");
  scanf("%d", &num);

  max = num;
  min = num;

        while ( num != 0 ) {
            if ( num > max)
            max = num;
            if ( num < min)
            min = num;
            printf("Enter another number: ");
            scanf("%d", &num);
}

  range = max - min;

  printf("Range of input = %d\n", range);

  return 0;
}

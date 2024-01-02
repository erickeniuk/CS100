#include <stdio.h>
#include <string.h>

int main(void) {

    int num;
    int i;
    int max;
    int min;
    int range;

    printf("Enter three numbers, please: \n");
    scanf("%d", &num);

    max = num;
    min = num;

    for (i = 0; i < 2; i++) {
      scanf("%d", &num);
      if (num > max)
          max = num;
      if (num < min)
          min = num;}

          range = max - min;

  printf("The range of your numbers is %d\n", range);

return 0;
}

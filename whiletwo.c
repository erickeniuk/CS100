#include <stdio.h>

int main(void) {

  int num, total = 0;
  // read initial value
  printf("Enter numbers, and then enter ctrl-d when \nyou wish to end...");
  scanf("%d", &num);


/*
fklasfklsadfjq
initial read in
*/
  scanf("%d", &num)
  // while we have not hit -1, stops before reading in the sentinel value
  while ( ! feof(stdin) )  {

      total = total + num;
      scanf("%d", &num);

  }

printf("The total is %d\n", total);

return 0;
}

#include <stdio.h>
#include <stdlib.h>

int sevens(int num) {
  if (num == 0) return 0; //base case
  int digit = num % 10;
  if (digit == 7) return 1 + sevens(num/10);
  return 0 + sevens(num/10);
}

int main(int argc, char *argv[]) {
    int val = atoi(argv[1]);
    printf("%d contains %d sevens\n", val, sevens(val) );
    return 0;
}

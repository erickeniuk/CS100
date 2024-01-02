#include <stdio.h>

int main(void) {

int num;

printf("Tell me how big you want your box to be!\n");
scanf("%d", &num);

for (int a=0; a<num; a++) {
    for (int b=0; b<num; b++) {
        if ((a == 0) || (b == 0)) {
          printf("X");}
    else if ((a == (num - 1)) || (b == (num - 1))) {
          printf("X");}
    else {
          printf("O");}
        }
  printf("\n");
}

  return 0;
}

#include <stdio.h>

int main(void) {

 for (int a = 0; a < 5; a++) {
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    int count = 0;
    int temp = num;
    while ( temp != 0 ) {
      count = count + 1;
      temp = temp / 10;

    }
    printf("%d has %d digits in it\n", num, count);
 }
return 0;
}

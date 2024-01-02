#include <stdio.h>
#include <string.h>

int main (void) {

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int count = 0;

    while(num != 0) {
          count = count + 1;
          num = num / 10;
          printf("I found another digit!\n");
}

    printf("Your number has %d digits\n", count);

return 0;

}

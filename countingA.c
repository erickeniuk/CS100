#include <stdio.h>
#include <string.h>

int main(void) {

    char str[50];
    int count = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    while ( ! feof(stdin) ) {

        //count A's in a string
        int len = strlen(str);
        for (int x = 0; x < len; x++) {
              if ( str[x] == 'A' ) count++;
              if ( str[x] == 'a' ) count++;
              // if ( str[x] == 'A' || str [x] == 'a') count++;
        }

        printf("Enter another string: ");
        scanf("%s", str);

    }

printf("We saw %d As\n", count);

return 0;

}

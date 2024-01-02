#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {



    FILE *datafile = fopen("datafile", "r");
    FILE *words = fopen("words", "w");
    FILE *numbers = fopen("numbers", "w");

    char str[50];
    int a, alpha, digit, other;

    fscanf(datafile, "%s", str);

    while (! feof(datafile) ) {
      alpha = 0;
      digit = 0;
      other = 0;

          for(a=0; a<strlen(str); a++) {
            if ( isalpha(str[a]) ) alpha = alpha + 1;
            else if ( isdigit(str[a]) ) digit = digit + 1;
            else other = other + 1;
            }
        if ((alpha != 0) && (digit == 0) && (other == 0))
        fprintf(words, "%s\n", str);

        else if ((alpha == 0) && (digit != 0) && (other == 0))
        fprintf(numbers, "%s\n", str);

        fscanf(datafile, "%s", str);
}

fclose(datafile);
fclose(words);
fclose(numbers);

  return 0;
}

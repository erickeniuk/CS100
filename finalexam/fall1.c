/*
READS IN STRINGS OF NUMBERS AND WRITES TO A FILE ONLY THE legal
INTEGERS
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>


int main(int argc, char *argv[ ]) {

FILE *data1 = fopen(argv[1], "r");
FILE *integers = fopen("integers", "w");

char strings[100];

while ( (! feof(data1) ) ) {
    fscanf(data1, "%s", strings);

    int digit=0;
    int length = 0;

    if (strings[0] == '-') {
    length = strlen(strings);
    for (int a=1; a<length; a++) {
    if (isdigit(strings[a])) digit = digit + 1;
    }
    if (digit == length - 1) fprintf(integers, "%s\n", strings);
    }

    else {
    length = strlen(strings);
    for (int a=0; a<length; a++) {
    if (isdigit(strings[a])) digit = digit + 1;
    }
    if (digit == length) fprintf(integers, "%s\n", strings);
    }
}




fclose(data1);
fclose(integers);
printf("\n");

return 0;
}

#include <stdio.h>
#include <string.h>

int main(void) {
    char str[50];
    int counts[26] = { 0 };

    printf("Enter strings, terminating with ctrl-d : ");
    scanf("%s", str);

    while( ! feof(stdin) ) {

    //process
    int len = strlen(str);
    for(a=0;a<len;a++) {
        char ch = str[a];
        if ( islower(ch) ) {
          int sub = ch - 97;
          counts[sub] = counts[sub] + 1;}
        if (isupper(ch) ) {
          int sub = ch - 65;
          counts[sub] = counts[sub] + 1;}
        }
        }
    }

    // read next
    scanf("%s", str);
    }

    for (a=0;a<26;a++)
    printf("%d", counts[a]);


    int max = count[0];
    for(a=1;a<26;a++) {
      if (counts[a] > max) max = counts[a];

    printf("%d \n", max);

    for (a=0;a<26;a++)
        if (counts[a] == max)
          printf("%c ", a+97);
    }
return 0;
}

#include <stdio.h>
#include <string.h>

void incrementCounts( char [ ], int [ ] );
void printMissing( int [ ] );

int main(void) {

int counts[26] = {0};
printf("Enter some text, ending with <control-d> : ");
char str[100];
scanf("%s", str);

while ( ! feof(stdin) ) {
  incrementCounts(str, counts);
  scanf("%s", str);
}

  printMissing( counts );
  return 0;
}

void incrementCounts(char str[100], int counts[26]) {
  int len = strlen(str);
        for (int a=0; a<len; a++) {
          if ((str[a] >= 65) && (str[a]<= 90)) counts[str[a] - 65]++;
          if ((str[a] >= 97) && (str[a] <= 122)) counts[str[a] - 97]++;
          }
}
void printMissing( int counts[26] ) {
  printf("Missing letters: ");
    for (int a=0; a<26; a++) {
      if (counts[a] == 0 ) printf("%c ", a + 97);
      }
  printf("\n");
}

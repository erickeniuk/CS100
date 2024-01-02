#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int canBuild(char *, char *);

int main( void ) {
 char input1[1024], input2[1024];
 printf("Enter a string : ");
 scanf("%s", input1);
 printf("Enter another string : ");
 scanf("%s", input2);
 if ( canBuild(input1, input2) )
 printf("You can build %s using only letters in %s\n", input1, input2);
 else
 printf("You cannot build %s using only letters in %s\n",
 input1, input2);
 return 0;
}

int canBuild(char *a, char *b){

char firstWord;
char secondWord;
int good = 0;

  for (int c=0;c<strlen(a); c++) {
    firstWord = a[c];
  for (int d=0;d<strlen(b); d++) {
    secondWord = b[d];
    if (secondWord == firstWord) {
      good = good + 1;
      printf("I found a character you can use!\n");
      break;
    }

  }
}

if (good == strlen(a)) return 1;


else return 0;

}

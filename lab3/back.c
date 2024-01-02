#include <stdio.h>
#include <string.h>

int main (void) {

  char word[20];
  int length;

printf("Enter a word: \n");
scanf("%s", word);

length = strlen(word);

while (! feof(stdin) ) {
      for (int x=length; x>=0; x--)
          printf("%c", word[x]);

          printf("\n");
          scanf("%s", word);
          length = strlen(word);

}

  return 0;
}

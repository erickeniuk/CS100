#include <stdio.h>
#include <string.h>

int main(void) {

  int alphabet[26] = {0};
  char str[50];
  int length = 0;
  int store = 0;
  int array = 0;
  int count = 0;
  char letter;
  int a;

  printf("Enter your input : ");
  fgets(str, 50, stdin);

  length = strlen(str);


  for (a=0; a<length; a++) {
      store = str[a];
      array = store - 97;
      ++alphabet[array];

  }
  printf("Missing letters: ");
  for (a=0; a<26; a++) {
      char letter = 0;
      if (alphabet[a] == 0) {
      letter = a + 97;
      printf("%c ", letter);
  }
}
printf("\n");
  return 0;
}

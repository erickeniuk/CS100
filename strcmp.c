#include <stdio.h>

int main(void) {
  char str[100];
  printf("Enter a string :\n");
  scanf("%s", str);
  printf("You entered >%s< \n", str);

  printf("Char 0 is %c \n", str[0]);

  int len = strlen(str);
  printf("The length is %d \n", len);

  strcmp()

  if (strcmp(str1, str2) == 0)
      printf("They are the same"\n);
    else
      printf("They are different\n");
  return 0;

}

#include <stdio.h>
#include <string.h>

int main(void) {

    char str[10];
    printf("Enter a string: ");
    scanf("%s", str);
    int a = 0
    int len = strlen(str);
    while (a < len) {
          printf("%c\n", str[a]);
          /*
          to print backwards...

          a --;

          */
          a++;
}
    return 0;
}


/*
for (a = 0; a < 5 ; a ++)

    printf("%d\n", a);

return 0;

      printf("Enter a string: ");
      cahr str[10];
      scanf("%s", str);
      int len = strlen(str);

      for (int a = 0; a < len; a++);
            printf("%d\n", str)

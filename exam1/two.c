#include <stdio.h>
#include <string.h>

int main(void) {

char str[50];
int count = 0;
int len;

printf("Enter strings, terminating with xxx\n");
scanf("%s", str);

while ( strcmp(str,"xxx") != 0)  {
    len = strlen(str);
    if (str[0] == str[len - 1])
        count = count + 1;
    //print count
    printf("Enter another string... ");
    scanf("%s", str);

  }

printf("\n");
printf("%d have same first and last character\n", count);


return 0;
}

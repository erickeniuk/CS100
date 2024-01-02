#include <stdio.h>
#include <string.h>

int main(void) {

char string[10];

scanf("%s", string);

if (strcmp(string, "hello") == 0) printf("Yeah, match");

return 0;
}

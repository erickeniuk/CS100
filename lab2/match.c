#include <stdio.h>
#include <string.h>

int main(void) {
    char str1[20];
    char str2[20];
    char str3[20];
    char str4[20];

    printf("We're gonna see if your words match!\n");
    printf("Enter four words\n");

    printf("Word one: ");
    scanf("%s", str1);
    printf("Word two: ");
    scanf("%s", str2);
    printf("Word three: ");
    scanf("%s", str3);
    printf("Word four: ");
    scanf("%s", str4);

    if (strcmp(str1, str2) == 0) {s
            printf("Match\n");}
    else if (strcmp(str1, str3) == 0) {
            printf("Match\n");}
    else if (strcmp(str1, str4) == 0) {
            printf("Match\n");}
    else if (strcmp(str2, str3) == 0) {
            printf("Match\n");}
    else if (strcmp(str2, str4) == 0) {
            printf("Match\n");}
    else if (strcmp(str3, str4) == 0) {
            printf("Match\n");}
    else {
      printf("No Match\n");}

return 0;
}

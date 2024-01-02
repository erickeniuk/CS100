#include <stdio.h>
#include <string.h>

int main(void) {

char*string;

printf("What fell?\n");
scanf("%s", string);

if((strcmp(string,"meat") == 0)) {
  printf("What kind of meant?\n");
  scanf("%s", string );

  if((strcmp(string, "chicken") == 0)) {
    printf("Nuggets?\n");
    scanf("%s", string);
}
    else if((strcmp(string, "beef") == 0)) {
      printf("Steak?\n");
      scanf("%s", string);

      if((strcmp(string, "yes") == 0)) {
        printf("You can eat what you dropped\n");

      return 0;
      }
    }
    else if((strcmp(string, "other") == 0)) {
      printf("Leftovers or fresh?\n");
}
        if((strcmp(string, "leftovers") == 0)) {
          printf("On the floor more than three seconds?\n");
          scanf("%s", string);
        }
    }

  if((strcmp(string, "yes") == 0)) {
    printf("On floor for more than three seconds?\n");
    scanf("%s", string);
  }

    else if((strcmp(string, "no") == 0)) {
     printf("Is the floor clean?\n");
     scanf("%s", string);

     if((strcmp(string, "no") == 0)) {
       printf("Do NOT eat what Dropped\n");
       return 0;
     }
     else if((strcmp(string, "yes") == 0)) {
       printf("You Can Eat What Dropped\n");
       return 0;
     }
   }

  if((strcmp(string, "no") == 0)) {
    printf("You Can Eat What You Dropped\n");
    return 0;
  }
    else if((strcmp(string, "yes") == 0)){
      printf("Do NOT Eat What You Dropped\n");
      return 0;

    }
  
  return 0;
  }

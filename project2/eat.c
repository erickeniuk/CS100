/*
Project 2
Eric Keniuk
February 7th, 2018
CS 100
Program asks user various questions to determine
if the food they dropped on the ground is appropriate to eat.
*/

#include <stdio.h>
#include <string.h>

int main (void) {

  char food[10];

  char meat[10] = "meat";

  char chicken[10] = "chicken";
  char beef[10] = "beef";
  char other[10] = "other";

  char leftovers[20] = "leftovers";
  char fresh[10] = "fresh";
  char freshtovers[10];

  char produce[10] = "produce";
  char bread[10] = "bread";
  char junkfood[10] = "junk-food";

  char candy[10] = "candy";
  char donuts[10] = "donuts";
  char chips[10] = "chips";




  char yesno[10];
  char yes[10] = "yes";
  char no[10] = "no";
  printf("Let's see if you can eat what fell on the floor!\n");

//variables declared. begin the flowchart section

  printf("What fell on the floor?\n");
  scanf("%s", food);

  if (strcmp(food, meat) == 0) {
    printf("What kind?\n");
    scanf("%s", food);
        if (strcmp(food, chicken) == 0) {
            printf("Nuggets?\n");
            scanf("%s", yesno);
                if (strcmp(yesno, yes) == 0) {
                    printf("On floor for more than three seconds?\n");
                    scanf("%s", yesno);
                        if (strcmp(yesno, yes) == 0) {
                            printf("Do NOT Eat What Dropped\n");
                        }
                        if (strcmp(yesno, no) == 0) {
                            printf("You Can Eat What Dropped\n");
                        }
                }
                else if (strcmp(yesno, no) == 0) {
                    printf("Is the floor clean?\n");
                    scanf("%s", yesno);
                          if (strcmp(yesno, yes) == 0) {
                            printf("On floor for more than three seconds?\n");
                            scanf("%s", yesno);
                                if (strcmp(yesno, yes) == 0) {
                                    printf("Do NOT Eat What Dropped\n");
                                }
                                if (strcmp(yesno, no) == 0) {
                                    printf("You Can Eat What Dropped\n");
                                }
                          }
                          else if (strcmp(yesno, no) == 0) {
                                printf("Do NOT Eat What Dropped\n");
                          }
                }
        }
        if (strcmp(food, beef) == 0) {
            printf("Steak?\n");
            scanf("%s", yesno);
                  if (strcmp(yesno, yes) == 0) {
                      printf("You Can Eat What Dropped\n");
                  }
                  else if (strcmp(yesno, no) == 0) {
                      printf("Is the floor clean?\n");
                      scanf("%s", yesno);
                          if (strcmp(yesno, yes) == 0) {
                            printf("On floor for more than three seconds?\n");
                            scanf("%s", yesno);
                                if (strcmp(yesno, yes) == 0) {
                                    printf("Do NOT Eat What Dropped\n");
                                }
                                if (strcmp(yesno, no) == 0) {
                                    printf("You Can Eat What Dropped\n");
                                }
                          }
                          else if (strcmp(yesno, no) == 0) {
                                printf("Do NOT Eat What Dropped\n");
                          }
                  }
        }
        if (strcmp(food, other) == 0) {
            printf("Leftovers or fresh?\n");
            scanf("%s", freshtovers);
                  if (strcmp(freshtovers, fresh) == 0) {
                      printf("Can you brush it off?\n");
                      scanf("%s", yesno);
                          if (strcmp(yesno, yes) == 0) {
                          printf("You Can Eat What Dropped\n");
                        }
                          if (strcmp(yesno, no) == 0) {
                          printf("Do NOT Eat What Dropped\n");
                        }
                  }
                  else if (strcmp(freshtovers, leftovers) == 0) {
                    printf("On floor for more than three seconds?\n");
                    scanf("%s", yesno);
                        if (strcmp(yesno, yes) == 0) {
                            printf("Do NOT eat what dropped!\n");
                        }
                        if (strcmp(yesno, no) == 0) {
                            printf("You Can Eat What Dropped\n");
                        }
                  }
        }
  }
  if (strcmp(food, produce) == 0) {
    printf("Does it grow in the ground?\n");
    scanf("%s", yesno);
        if (strcmp(yesno, yes) == 0) {
            printf("On floor for more than three seconds?\n");
            scanf("%s", yesno);
                  if (strcmp(yesno, yes) == 0) {
                      printf("Do NOT eat what dropped!\n");
                    }
                  if (strcmp(yesno, no) == 0) {
                      printf("You Can Eat What Dropped\n");
                    }
                  }
        else if (strcmp(yesno, no) == 0) {
                        printf("Smashed or bruised?\n");
                        scanf("%s", yesno);
                            if (strcmp(yesno, yes) == 0) {
                                printf("Do NOT eat what dropped!\n");
                              }
                            if (strcmp(yesno, no) == 0) {
                                printf("Is the floor clean?\n");
                                scanf("%s", yesno);
                                    if (strcmp(yesno, yes) == 0) {
                                      printf("You Can Eat What Dropped\n");
                                      }
                                    if (strcmp(yesno, no) == 0) {
                                      printf("On floor for more than three seconds?\n");
                                      scanf("%s", yesno);
                                            if (strcmp(yesno, yes) == 0) {
                                                printf("Do NOT eat what dropped!\n");
                                              }
                                            if (strcmp(yesno, no) == 0) {
                                                printf("You Can Eat What Dropped\n");
                                              }
                                    }
                                }
                  }

  }
  if (strcmp(food, bread) == 0) {
    printf("Buttered?\n");
    scanf("%s", yesno);
        if (strcmp(yesno, yes) == 0) {
            printf("Butter side up?\n");
            scanf("%s", yesno);
                  if (strcmp(yesno, yes) == 0) {
                  printf("Is the floor clean?\n");
                  scanf("%s", yesno);
                      if (strcmp(yesno, yes) == 0) {
                        printf("You Can Eat What Dropped\n");
                      }
                      if (strcmp(yesno, no) == 0) {
                        printf("Do NOT Eat What Dropped\n");
                      }
                  }
                  else if (strcmp(yesno, no) == 0) {
                        printf("Do NOT Eat What Dropped\n");
                  }
        }
        else if (strcmp(yesno, no) == 0) {
              printf("Is the floor clean?\n");
              scanf("%s", yesno);
                  if (strcmp(yesno, yes) == 0) {
                    printf("You Can Eat What Dropped\n");
                  }
                  if (strcmp(yesno, no) == 0) {
                    printf("Do NOT Eat What Dropped\n");
                  }
                }
              }
  if (strcmp(food, junkfood) == 0) {
    printf("What kind?\n");
    scanf("%s", food);
          if (strcmp(food, candy) == 0) {
            printf("Is the floor clean?\n");
            scanf("%s", yesno);
                if (strcmp(yesno, yes) == 0) {
                  printf("You Can Eat What Dropped\n");
                }
                if (strcmp(yesno, no) == 0) {
                  printf("Do NOT Eat What Dropped\n");
                }
          }
          if (strcmp(food, donuts) == 0) {
              printf("Sprinkles?\n");
              scanf("%s", yesno);
                    if (strcmp(yesno, yes) == 0) {
                      printf("Is the floor clean?\n");
                      scanf("%s", yesno);
                          if (strcmp(yesno, yes) == 0) {
                            printf("You Can Eat What Dropped\n");
                          }
                          if (strcmp(yesno, no) == 0) {
                            printf("Do NOT Eat What Dropped\n");
                          }
                    }
                    else if (strcmp(yesno, no) == 0) {
                          printf("On floor for more than three seconds?\n");
                          scanf("%s", yesno);
                                if (strcmp(yesno, yes) == 0) {
                                    printf("Do NOT Eat What Dropped\n");
                              }
                                if (strcmp(yesno, no) == 0) {
                                    printf("You Can Eat What Dropped\n");
                              }
                    }

          }
          if (strcmp(food, chips) == 0) {
              printf("Can you brush it off?\n");
              scanf("%s", yesno);
                    if (strcmp(yesno, yes) == 0) {
                      printf("On floor for more than three seconds?\n");
                      scanf("%s", yesno);
                            if (strcmp(yesno, yes) == 0) {
                                printf("Do NOT Eat What Dropped\n");
                          }
                            if (strcmp(yesno, no) == 0) {
                                printf("You Can Eat What Dropped\n");
                          }
                    }
                    else if (strcmp(yesno, no) == 0) {
                            printf("Do NOT Eat What Dropped\n");
                    }
          }
  }


return 0;
}

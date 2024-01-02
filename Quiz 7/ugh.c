#include <stdio.h>
#include <stdlib.h>
int main( int argc, char *argv[] ) {
 FILE *fp1 = fopen(argv[1], "r");
 int oldVal, num;
 fscanf(fp1, "%d", &num);
 oldVal = num;
 while ( ! feof(fp1) ) {
 if (num > oldVal) {
 printf("%d\n", num-oldVal);
 oldVal = num;
 }
 fscanf(fp1, "%d", &num);
 }
 printf("Answer = %d\n", oldVal);
 return 0;
}

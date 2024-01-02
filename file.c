/*
#include <stdio.h>

int main(void) {

      FILE *fp = fopen("data1", "r"); //read a file, input

      //"w" writes to a file
      //"a" adds an existing (appends)
      // rb or wb, messes with binary for image manipulation

      fprintf(stdout,"Roll Tide\n");
      fprintf(stdout, "Enter a number : ");

      int num;
      fscanf(fp, "%d", &num);

      fprintf(stdout, "You entered a %d\n", num);

      fclose(fp);
      return 0;
}
*/
// read numbers from one file, write to another

#include <stdio.h>

int main(void) {

  int num;
  FILE * fpIn, *fpOut;

  printf("Enter the name of the input file : ");
  char str[50];
  scanf("%s", str);
  fpIn = fopen( str, "r" );

  if ( fpIn == NULL ) {
    printf("The file does not exist \n");
    return 0;
  }

  printf("Enter the name of the output file : ");
  scanf("%s", str);
  fpOut = fopen( str, "w");

  fscanf( fpIn, "%d", &num);
  while (! feof( fpIn ) ) {

      fprint( fpOut, "%d\n", num);
      fscanf( fpIn, "%d", &num );

  }

  fclose(fpIn);
  fclose(fpOut);
  return 0;
}

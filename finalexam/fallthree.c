#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
 FILE *fp = fopen(argv[1], "r");
 int size = atoi(argv[2]);


 fclose(fp);

 return 0;
}

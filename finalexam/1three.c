#include <stdio.h>
#include <stdlib.h>

int *allocateArray(int);
void readArray(int *, int);
int alternates(int *, int);

int main( void ) {
 int size;
 printf("Enter the size of the array : ");
 scanf("%d", &size);
 int *array = allocateArray(size);
 printf("Enter array values (%d values) : ", size);
 readArray(array, size);
 int ans = alternates(array, size);
 if (ans == 1)
 printf("The array alternates\n");
 else
 printf("The array does not alternate\n");
 return 0;
}

int *allocateArray(int num) {
int *array = malloc(sizeof(int) * num);
return array;

}

void readArray(int *a, int dylan){
int input;
for (int b=0; b<dylan; b++) {
    scanf("%d", &input);
    a[b] = input;}
}

int alternates(int *a, int dylan){
  int good = 0;
  //even start loop
  if (a[0]%2==0) {
    for (int b=1; b<dylan; b++) {
      if ((b%2==0) && (a[b]%2==0)) good = good + 1;
      if ((b%2==1) && (a[b]%2==1)) good = good + 1;
    }
    if (good == (dylan - 1)) return 1;
    else return 0;
  }
 //odd start loop
  else if (a[0]%2==1) {
    for (int c=1; c<dylan; c++) {
      if ((c%2==0) && (a[c]%2==1)) good = good + 1;
      if ((c%2==1) && (a[c]%2==0)) good = good + 1;
    }
    if (good == (dylan - 1)) return 1;
    else return 0;
  }

  else return 0;
}

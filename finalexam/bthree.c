#include <stdio.h>
#include <stdlib.h>

int *allocateArray(int);

void readArray(int *, int);

int growsFast(int *, int);

int main( void ) {
 int size;
 printf("Enter the size of the array : ");
 scanf("%d", &size);
 int *array = allocateArray(size);
 printf("Enter array values (%d values) : ", size);
 readArray(array, size);
 printf("The array is :\n");
 for (int z=0; z<size;z++) {
 printf("%d\n", array[z]);
  }
 int ans = growsFast(array, size);
 if (ans == 1)
 printf("The array is fast growing\n");
 else
 printf("The array is not fast growing\n");
 return 0;
}

int *allocateArray(int size){
  int *array = malloc(sizeof(int) * size);
  return array;
}

void readArray(int *a, int size){
  int input;
  for (int b=0; b<size; b++) {
      scanf("%d", &input);
      a[b] = input;}
}

int growsFast(int *a, int size){
int sum;

for (int c=1; c<size; c++) {
sum = 0;

for (int b=c-1; b>=0; b--) {
sum = a[b] + sum;}
printf("the sum is %d for c = %d\n", sum, a[c]);
if (a[c]<=sum) return 0;

}
return 1;
}

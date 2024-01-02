#include <stdio.h>
#include <stdlib.h>

int **allocateMatrix(int, int);
void initMatrix(int **, int, int);
int findRange(int **, int, int);
double findAverage(int **, int, int);
void printCorners(int **, int, int);

int main(int argc, char *argv[]) {
	int **data;
	int row = atoi(argv[1]);
	int col = atoi(argv[2]);

	data = allocateMatrix(row, col);
	initMatrix(data, row, col);
	printf("The range of values is %d\n", findRange(data, row, col) );
	printf("The average of all values is %lf\n", findAverage(data, row, col) );
	printCorners(data, row, col);

	return 0;
}

int **allocateMatrix(int r, int c) {
	int **data = malloc ( sizeof(int *) * r);
	for(int a=0; a<r; a++) data[a] = malloc ( sizeof(int *) * c);

	// allocate a two-dimensional array of integers
	//	array has r rows and c columns
	//	do NOT initialize any of the values in the matrix
	//	return a pointer to this newly allocated matrix
	return data;
}

void initMatrix(int **array, int r, int c) {
	srand(0);
	for(int a=0; a<r; a++)
	for(int b=0; b<c; b++) array[a][b] = (rand() % 1000);
	// initialize your random number generator with srand(0)
	// using a nested loop, put a value 0-999 in each element of the array, rand()%1000
}

int findRange(int **array, int r, int c) {
	int max = 0;
	int min = 1000;
	for(int a=0; a<r; a++)
	for(int b=0; b<c; b++) {
		if (array[a][b] > max) max = array[a][b];
		if (array[a][b] < min) min = array[a][b];
	}
	// find the range of all values in the matrix
	//	find the maximum value and minimum values
	//	range is simply max - min
	return (max - min);
}


double findAverage(int **array, int r, int c) {
	double average = 0.0;
	double count = 0.0;
	double total = 0.0;
	for(int a=0; a<r; a++)
	for(int b=0; b<c; b++) {
		count++;
		total = total + array[a][b];
	}
	average = (total / count);
	// find the average of all values in the matrix
	return average;
}

void printCorners(int **array, int r, int c) {
	printf("%d %d\n", array[0][0], array[0][c-1]);
	printf("%d %d\n", array[r-1][0], array[r-1][c-1]);
	// print the four corners of the matrix
	//	print format
	//		upper-left upper-right
	//		lower-left lower-right
	// for a 1x1 matrix, print the single value four times
}

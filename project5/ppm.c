/* Eric Keniuk CS 100 April 6th, 2018
Project builds a program that can be used to manipulate ppm image files
in order to duplicate, rotate, flip, etc image files and output
a new ppm file in that format.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ppm.h"

//gcc -std=c99 main.c ppm.case

ppmPic *readPic(char *fileName) {
	char str[10];
	ppmPic *myPic = malloc ( sizeof (ppmPic) );
	FILE *origPic = fopen(fileName, "r");

	fscanf(origPic, "%s", str);
	fscanf(origPic, "%d", &myPic->cols);
	fscanf(origPic, "%d", &myPic->rows);
	fscanf(origPic, "%d", &myPic->colors);

	myPic->pixels = malloc(sizeof(Pixel *) * myPic->rows);
	for(int i=0; i<myPic->rows; i++) myPic->pixels[i] = malloc(sizeof(Pixel) * myPic->cols);

	for(int a=0; a<myPic->rows; a++)
	for(int b=0; b<myPic->cols; b++) {
	fscanf(origPic, "%d", &myPic->pixels[a][b].red);
	fscanf(origPic, "%d", &myPic->pixels[a][b].green);
	fscanf(origPic, "%d", &myPic->pixels[a][b].blue);
	}

	fclose(origPic);
	return myPic;
}

void writePic(ppmPic *myPic, char *fileName) {
	fileName[strlen(fileName) - 4 ] = '\0';
	strcat(fileName, "-NEW.ppm");
	FILE *newPic = fopen(fileName, "w");

	fprintf(newPic, "P3\n");
	fprintf(newPic, "%d    ", myPic->cols);
	fprintf(newPic, "%d   ", myPic->rows);
	fprintf(newPic, "%d\n", myPic->colors);

		for(int a=0; a<myPic->rows; a++) {
		for(int b=0; b<myPic->cols; b++) {
		fprintf(newPic, "%d ", myPic->pixels[a][b].red);
		fprintf(newPic, "%d ", myPic->pixels[a][b].green);
		fprintf(newPic, "%d   ", myPic->pixels[a][b].blue);
		}
		fprintf(newPic, "\n");}
	fprintf(newPic, "\n");
	fclose(newPic);
	return;
}

ppmPic *rotateLeft(ppmPic *thePic) {
	ppmPic * spicyBanana = malloc (sizeof(ppmPic));
	spicyBanana->pixels = malloc(sizeof(Pixel *) * thePic->cols);
	for(int i=0; i<thePic->cols; i++) spicyBanana->pixels[i] = malloc(sizeof(Pixel) * thePic->rows);

	for(int a=0; a<(thePic->rows); a++)
	for(int b=0; b<(thePic->cols); b++) {
	spicyBanana->pixels[(thePic->cols)-1-b][a].red = thePic->pixels[a][b].red;
	spicyBanana->pixels[(thePic->cols)-1-b][a].green = thePic->pixels[a][b].green;
	spicyBanana->pixels[(thePic->cols)-1-b][a].blue = thePic->pixels[a][b].blue;
}

	spicyBanana->rows = thePic->cols;
	spicyBanana->cols = thePic->rows;
	spicyBanana->colors = thePic->colors;

	return spicyBanana;
}

ppmPic *rotateRight(ppmPic *thePic) {
	ppmPic * spicyBanana = malloc (sizeof(ppmPic));
	spicyBanana->pixels = malloc(sizeof(Pixel *) * thePic->cols);
	for(int i=0; i<thePic->cols; i++) spicyBanana->pixels[i] = malloc(sizeof(Pixel) * thePic->rows);

	for(int a=0; a<(thePic->rows); a++)
	for(int b=0; b<(thePic->cols); b++) {
	spicyBanana->pixels[b][(thePic->rows)-1-a].red = thePic->pixels[a][b].red;
	spicyBanana->pixels[b][(thePic->rows)-1-a].green = thePic->pixels[a][b].green;
	spicyBanana->pixels[b][(thePic->rows)-1-a].blue = thePic->pixels[a][b].blue;
}

	spicyBanana->rows = thePic->cols;
	spicyBanana->cols = thePic->rows;
	spicyBanana->colors = thePic->colors;

	return spicyBanana;
}

ppmPic *flipHorizontal(ppmPic *thePic) {
	int tempRed, tempGreen, tempBlue;
		for(int a=0; a<(thePic->rows); a++)
		for(int b=0; b<((thePic->cols)/2); b++) {
		tempRed = thePic->pixels[a][b].red;
		tempGreen = thePic->pixels[a][b].green;
		tempBlue = thePic->pixels[a][b].blue;
		thePic->pixels[a][b].red = thePic->pixels[a][(thePic->cols) - 1 - b].red;
		thePic->pixels[a][b].green = thePic->pixels[a][(thePic->cols) - 1 - b].green;
		thePic->pixels[a][b].blue = thePic->pixels[a][(thePic->cols) - 1 - b].blue;
		thePic->pixels[a][(thePic->cols) - 1 - b].red = tempRed;
		thePic->pixels[a][(thePic->cols) - 1 - b].green = tempGreen;
		thePic->pixels[a][(thePic->cols) - 1 - b].blue = tempBlue;
		}
		return thePic;
}

ppmPic *flipVertical(ppmPic *thePic) {
int tempRed, tempGreen, tempBlue;
	for(int a=0; a<((thePic->rows)/2); a++)
	for(int b=0; b<(thePic->cols); b++) {
	tempRed = thePic->pixels[a][b].red;
	tempGreen = thePic->pixels[a][b].green;
	tempBlue = thePic->pixels[a][b].blue;
	thePic->pixels[a][b].red = thePic->pixels[(thePic->rows) - 1 - a][b].red;
	thePic->pixels[a][b].green = thePic->pixels[(thePic->rows) - 1 - a][b].green;
	thePic->pixels[a][b].blue = thePic->pixels[(thePic->rows) - 1 - a][b].blue;
	thePic->pixels[(thePic->rows) - 1 - a][b].red = tempRed;
	thePic->pixels[(thePic->rows) - 1 - a][b].green = tempGreen;
	thePic->pixels[(thePic->rows) - 1 - a][b].blue = tempBlue;
	}
	return thePic;
}

ppmPic *invert(ppmPic *thePic) {
	for(int a=0; a<(thePic->rows); a++)
	for(int b=0; b<(thePic->cols); b++) {
	thePic->pixels[a][b].red = thePic->colors - thePic->pixels[a][b].red;
	thePic->pixels[a][b].green = thePic->colors - thePic->pixels[a][b].green;
	thePic->pixels[a][b].blue = thePic->colors - thePic->pixels[a][b].blue;
	}
	return thePic;
}

ppmPic *duplicate(ppmPic *thePic) {
	return thePic;
}

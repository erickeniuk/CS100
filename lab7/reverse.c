#include <stdio.h>
#include <string.h>

void reverse(char *);

int main(int argc, char *argv[]) {

	for (int a=1; a<argc; a++) {
		printf("%s becomes ", argv[a]);
		reverse(argv[a]);
		printf("%s\n", argv[a]);

	}

	return 0;
}

//Alabama = 7 /2 = 3.5

void reverse(char *argv) {
	char letter;
	for (int a=0; a<(strlen(argv)/2); a++) {
		letter = argv[strlen(argv) - 1 - a];
		argv[strlen(argv)-1-a] = argv[a];
		argv[a] = letter;
	}
	return;
}

#include <stdio.h>
#include <stdlib.h>

int f(int a, int b) {
if (a == 0) return 0;
int val = a % 10;
printf("%d = a, %d = b, and val = %d\n", a , b, val);
if (val == b) return 1 + f(a/10, val);
return f(a/10, val);
}

int main (int argc, char *argv[]) {
for (int a = 1; a<argc; a++) {
int num = atoi(argv[a]);
printf("%d and %d\n", num, f(num, -1));
}
return 0;
}

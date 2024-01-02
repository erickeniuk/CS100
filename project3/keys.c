#include <stdio.h>
#include <string.h>

// To close stdin, use CTRL+D
int main (void) {

  char str[50];

  int a;

  int countLeftPink = 0;
  int countLeftRing = 0;
  int countLeftMiddle = 0;
  int countLeftIndex = 0;
  int countLeftHand = 0;

  int countRightIndex = 0;
  int countRightMiddle = 0;
  int countRightRing = 0;
  int countRightPink = 0;
  int countRightHand = 0;

  int tempCountLeft = 0;
  int tempCountRight = 0;

  int countOnlyLeft = 0;
  int countOnlyRight = 0;

  int totalKeystrokes = 0;

  int strLenCount = 0;
  int strings = 0;

printf("Start typing!\n");
scanf("%s", str);

while( ! feof(stdin) ) {

  tempCountLeft = 0;
  tempCountRight = 0;

    for(a=0; a<strlen(str); a++) {


        if ((str[a] == '`') || (str[a] == '1') || (str[a] == 'q') || (str[a] == 'a')
        || (str[a] == 'z')) {
        countLeftPink = countLeftPink + 1;
        tempCountLeft = tempCountLeft + 1;}

        if ((str[a] == '~') || (str[a] == '!') || (str[a] == 'Q') || (str[a] == 'A')
        || (str[a] == 'Z')) {

        countRightPink = countRightPink + 1;
        countLeftPink = countLeftPink + 1;
        tempCountLeft = tempCountLeft + 1;
        tempCountRight = tempCountRight +1;}


        if ((str[a] == '2') || (str[a] == 'w') || (str[a] == 's') || (str[a] == 'x')) {

        countLeftRing = countLeftRing + 1;
        tempCountLeft = tempCountLeft + 1;}

        if ((str[a] == '@') || (str[a] == 'W') || (str[a] == 'S') || (str[a] == 'X')){

        countLeftRing = countLeftRing + 1;
        countRightPink = countRightPink + 1;
        tempCountLeft = tempCountLeft + 1;
        tempCountRight = tempCountRight +1;}

        if ((str[a] == '3') || (str[a] == 'e') || (str[a] == 'd') || (str[a] == 'c')){

        countLeftMiddle = countLeftMiddle + 1;
        tempCountLeft = tempCountLeft + 1;}

        if ((str[a] == '#') || (str[a] == 'E') || (str[a] == 'D') || (str[a] == 'C')){

        countLeftMiddle = countLeftMiddle + 1;
        countRightPink = countRightPink + 1;
        tempCountLeft = tempCountLeft + 1;
        tempCountRight = tempCountRight +1;}

        if ((str[a] == '4') || (str[a] == 'r') || (str[a] == 'f') || (str[a] == 'v') || (str[a] == '5')
        || (str[a] == 't') || (str[a] == 'g') || (str[a] == 'b')) {

        countLeftIndex = countLeftIndex + 1;
        tempCountLeft = tempCountLeft + 1;}

        if ((str[a] == '$') || (str[a] == 'R') || (str[a] == 'F') || (str[a] == 'V') || (str[a] == '%')
        || (str[a] == 'T') || (str[a] == 'G') || (str[a] == 'B')) {

        countLeftIndex = countLeftIndex + 1;
        countRightPink = countRightPink + 1;
        tempCountLeft = tempCountLeft + 1;
        tempCountRight = tempCountRight +1;}

        //-------------------- right hand begin ----------------------------------------

        if ((str[a] == '6') || (str[a] == 'y') || (str[a] == 'h') || (str[a] == 'n') || (str[a] == '7')
        || (str[a] == 'u') || (str[a] == 'j') || (str[a] == 'm')) {

        countRightIndex = countRightIndex + 1;
        tempCountRight = tempCountRight +1;}

        if ((str[a] == '^') || (str[a] == 'Y') || (str[a] == 'H') || (str[a] == 'N') || (str[a] == '&')
        || (str[a] == 'U') || (str[a] == 'J') || (str[a] == 'M')) {

        countRightIndex = countRightIndex + 1;
        countLeftPink = countLeftPink + 1;
        tempCountLeft = tempCountLeft + 1;
        tempCountRight = tempCountRight +1;}

        if ((str[a] == '8') || (str[a] == 'i') || (str[a] == 'k') || (str[a] == ',')) {

        countRightMiddle = countRightMiddle + 1;
        tempCountRight = tempCountRight +1;}

        if ((str[a] == '*') || (str[a] == 'I') || (str[a] == 'K') || (str[a] == '<')) {

        countRightMiddle = countRightMiddle + 1;
        countLeftPink = countLeftPink + 1;
        tempCountLeft = tempCountLeft + 1;
        tempCountRight = tempCountRight +1;}

        if ((str[a] == '9') || (str[a] == 'o') || (str[a] == 'l') || (str[a] == '.')) {

        countRightRing = countRightRing + 1;
        tempCountRight = tempCountRight + 1;}

        if ((str[a] == '(') || (str[a] == 'O') || (str[a] == 'L') || (str[a] == '>')) {

        countRightRing = countRightRing + 1;
        countLeftPink = countLeftPink + 1;
        tempCountLeft = tempCountLeft + 1;
        tempCountRight = tempCountRight + 1;}

        if ((str[a] == '0') || (str[a] == 'p') || (str[a] == ';') || (str[a] == '/') || (str[a] == 39)
        || (str[a] == '[') || (str[a] == ']') || (str[a] == 92 ) || (str[a] == '-') || (str[a] == '=')) {

        countRightPink = countRightPink + 1;
        tempCountRight = tempCountRight + 1;}

        if ((str[a] == ')') || (str[a] == 'P') || (str[a] == ':') || (str[a] == '?') || (str[a] == 34)
        || (str[a] == '{') || (str[a] == '}') || (str[a] == '|' ) || (str[a] == '-') || (str[a] == '=')) {

        countRightPink = countRightPink + 1;
        countLeftPink = countLeftPink + 1;
        tempCountLeft = tempCountLeft + 1;
        tempCountRight = tempCountRight + 1;}

      }

        countRightHand = countRightIndex + countRightMiddle + countRightRing + countRightPink;
        countLeftHand = countLeftIndex + countLeftMiddle + countLeftRing + countLeftPink;

        if (tempCountLeft == 0)
              countOnlyRight = countOnlyRight + 1;

        if (tempCountRight == 0)
        countOnlyLeft = countOnlyLeft + 1;

        strLenCount = strLenCount + strlen(str);

        strings = strings + 1;
        scanf("%s", str);
      }

totalKeystrokes = countRightHand + countLeftHand;

printf("%d strings entered, %d total characters\n", strings, strLenCount);

printf("  %d typed using only the left hand\n", countOnlyLeft);
printf("  %d typed using only the right hand\n", countOnlyRight);

printf("%d total keystrokes\n", totalKeystrokes);

printf("  %d - Left index\n", countLeftIndex);
printf("  %d - Left middle\n", countLeftMiddle);
printf("  %d - Left ring\n", countLeftRing);
printf("  %d - Left pinky\n", countLeftPink);

printf("  %d - Right index\n", countRightIndex);
printf("  %d - Right middle\n", countRightMiddle);
printf("  %d - Right ring\n", countRightRing);
printf("  %d - Right pinky\n", countRightPink);



return 0;

}


/*
Left Pinky = "`";1;q;a;z;shift key
Left Ring = 2;w;s;x;
Left Middle = 3;e;d;c;
Left Index = 4;r;f;v;5;t;g;b;

Right Index = 6;y;h;n;7;u;j;m;
Right Middle = 8;i;k;,;
Right Rink = 9;o;l;.;
Right Pinky = 0;p;';';/;-;[;];;enter
*/

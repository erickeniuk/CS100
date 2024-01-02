//treat everything as a string use atoi to convert to integer

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

//function retrieves EPOCH time in seconds
char *readableTime(int sec) {
        time_t epoch_time = (time_t) sec;
        return asctime( localtime( &epoch_time ) );
}

char *phoneNumber(int phone) {

}


int main(int argc, char *argv[ ]) {

FILE *data1 = fopen(arg[1], "r");
FILE *data2 = fopen(arg[2], "r");

int time1, time2, phone1, phone2, stringCount1,stringCount2, a;

char strings1[100][40];
char strings2[100][40];

fscanf(data1, "%s %s %s", &time1, &phone1, &stringCount1);
fscanf(data2, "%s %s %s", &time2, &phone2, &stringCount2);

for(a=0; a<stringCount1; a++) {

}

while ( (! feof(file1)) && (! feof(file2)) ) {


        if ( time1 < time2) {
          fscanf(inText, "%s", inTextString);
          //process incoming message line from file 1
          //read next time from file 2
        }
        else
        printf(
        fscanf(outText, "%s", outTextString);
        //read next time from file2

}
//only one of the following while statements will be true

while ( (! feof(file1) ) ) {
    //process incoming message line from file1
    //read next time from file1
}
while ( (! feof(file2) ) ) {
    //process outgoing message line from file2
    //read next time from file2

  }

}


fclose(data1);
fclose(data2);
printf("\n");

return 0;
}

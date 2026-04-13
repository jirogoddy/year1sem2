#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char name[31];
    char world[31];
    int height;
    int time;
}   ROLLER_COASTER;

int main (){
    char line[101];
    int length = atoi( gets(line) );
    ROLLER_COASTER coasters[length];

    for (int i = 0; i<length; i++){
        gets(line);
        strcpy(coasters[i].name, strtok(line, ";"));
        strcpy(coasters[i].world, strtok(NULL, ";"));
        coasters[i].height, atoi(strtok(NULL, ";"));
        coasters[i].time, atoi(strtok(NULL, ";"));
    }


    
    for (int i=0; i<length; i++){
        printf("%s (%s): %d\n", coasters[i].name, coasters[i].world, coasters[i].time);
    }
    return EXIT_SUCCESS;

}

// for EOF, use the while loop since we don't know how many inputs we're expecting
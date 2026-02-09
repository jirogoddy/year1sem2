#include <stdio.h>
#include <stdlib.h>
#define OK 0
#define PLUS(a) (a+1)
    //functions start with the datatype of the return value

int main(){
    printf("Hello World!\n");
    return PLUS(0);
    // or return EXIT_SUCCESS after including stdlib.h
    // or return OK after defining OK as 0
}

/*
    first step is the -E (gcc -E "file name"). This is called preprocessing


    the operating system needs a value to return when printing...other than the return value
    that's why we must add return 0 at the end of a main function
    another way is to include stdlib.h as above, and return EXIT_SUCCESS
*/ 
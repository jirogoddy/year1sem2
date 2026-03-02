#include <stdio.h>
#include <stdlib.h>

// to obtain max value from a given set of n numbers

/* 
int main(){
    int max, count;
    scanf("%d", &count);
    for(int i = 0; i<count; i++){
        int value;
        scanf("%d", &value);
        if (i == 0 || max < value){     // i == 0 must be cheacked first because it's an already existing condition in the code
            max = value;
        }
    }
    printf("%d\n", max);
    return EXIT_SUCCESS;
}
*/


int main(){
    int number;
    scanf("%d", &number);
    while(1){
        int value;
        if (scanf("%d", &value) == EOF){
            break;
        }
        if (value > number){
            number = value;
        }
    }
    printf("%d\n", number);

    return EXIT_SUCCESS;
}
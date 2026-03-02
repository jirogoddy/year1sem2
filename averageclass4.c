#include <stdio.h>
#include <stdlib.h>

// to get the average of n numbers

/*
int main(){
    int count, sum = 0;
    scanf("%d", &count);
    for (int i=0; i<count; i++){
        int value;
        scanf("%d", &value);
        sum += value;
    }
    printf ("%.2lf\n", sum/(double)count);
    return EXIT_SUCCESS;
}
*/

// with EOF

int main(){
    int count, sum = 0;
    while(1){
        int value;
        if (scanf("%d", &value) == EOF){
            break;
        }
        sum += value;
    }
    printf("%.2lf\n", sum/(double)count);
    return EXIT_SUCCESS;
}
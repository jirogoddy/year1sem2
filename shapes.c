#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    printf("Enter side a! \n");
    scanf("%d", &a);
    printf("Side a is %d\n", a);

    int b;
    printf("Enter side a! \n");
    scanf("%d", &b);
    printf("Side a is %d\n", b);
    
    printf("Area is %d\n", a * b, "m");
    return EXIT_SUCCESS;
}
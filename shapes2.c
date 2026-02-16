#include <stdio.h>
#include <stdlib.h>
int main(){
    double a, b;
    scanf("%lf %lf", &a, &b);
    printf("%.2lf %.4lf\n", a, b);
    printf("%.10lf\n", a * b);
    
    return EXIT_SUCCESS;
}
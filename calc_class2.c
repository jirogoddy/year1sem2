#include <stdio.h>
#include <stdlib.h>



int main(){
    int a, b;
    char op;

    scanf("%d %c %d", &a, &op, &b);
    printf("%d %c %d\n", a, op, b);

    if (op == '+'){
        printf("%d\n", a + b);
        printf(":)\n");
    }
    else if (op == '-'){
        printf("%d\n", a - b);
    }
    else if (op == '*'){
        printf("%d\n", a * b);
    }
    else if (op == '/'){
        printf("%d\n", a / b);
    }
    
    return EXIT_SUCCESS;
}


/*
    int %d
    double %lf (%.2lf or %.4lf depending on how many digits you want at the end)
    char %c


    in C, only the very first statement belongs to the IF loop
    a way to go about it is by using {} operator
*/
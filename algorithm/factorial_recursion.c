#include <stdio.h>

int factorial(n){

    if(n == 1) return 1;

    return factorial(n-1) * n;
}

void main(){

    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Factorial: %d", factorial(n));
}

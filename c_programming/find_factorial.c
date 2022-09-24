#include <stdio.h>

void main(){

    int i, n, factorial = 1;

    printf("Enter a positive number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) factorial *= i;

    printf("Sum is: %d", factorial);
}

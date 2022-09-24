#include <stdio.h>

int sum(int n){
    if(n == 0) return 0;
    return sum(n-1) + n;
}

void main(){

    int n;
    printf("Enter a value for n: ");
    scanf("%d", &n);

    printf("Sum: %d", sum(n));
}

#include <stdio.h>

void main(){

    int i, n;

    printf("Enter a positive number: ");
    scanf("%d", &n);

    for(i = 0; i <= 10; i++){
        printf("%d * %d = %d\n", n, i, n * i);
    }
}

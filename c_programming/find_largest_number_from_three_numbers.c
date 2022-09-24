#include <stdio.h>

void main(){
    int num1, num2, num3;

    printf("Enter 3 numbers using space: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if(num1 > num2) printf("%d is the biggest number here.", num1);
    else if(num2 > num3) printf("%d is the biggest number here.", num2);
    else printf("%d is the biggest number here.", num3);
}

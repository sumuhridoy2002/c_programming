#include <stdio.h>

void main(){

    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if(number == 0) printf("Zero.\n");
    else if(number > 0) printf("Positive.\n");
    else printf("Negative.\n");
}

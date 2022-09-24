#include <stdio.h>

void main(){

    long long int number;
    int i = 0;

    printf("Enter number: ");
    scanf("%lld", &number);

    while(number != 0){
        number /= 10;
        i++;
    }

    printf("There are %d digits in the number.", i);
}

#include <stdio.h>

void main(){

    int number, power, result = 1;

    printf("Enter the number: ");
    scanf("%d", &number);

    printf("Enter the power: ");
    scanf("%d", &power);



    while(power){ // 10 * 3 = 1000
        result *= number;
        power--;
    }
    printf("Reverse of this number is : %d", result);
}


#include <stdio.h>

int getpower(int num, int power){
    if(power == 0) return 1;
    return getpower(num, power - 1) * num;
}

void main(){
    int num, power;

    printf("Enter value of num: ");
    scanf("%d", &num);

    printf("Enter value of power: ");
    scanf("%d", &power);

    printf("Result: %d", getpower(num, power));
}

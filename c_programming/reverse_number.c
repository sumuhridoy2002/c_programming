#include <stdio.h>

void main(){

    int num, reverse = 0, reminder;

    printf("Enter the number: ");
    scanf("%d", &num);

    while(num != 0){
        reminder = num % 10; // 1234 % 10 = 4
        reverse = reverse * 10 + reminder; // reverse * 10 = position, reminder is the extracted digit
        num /= 10;
    }
    printf("Reverse of this number is : %d", reverse);
}

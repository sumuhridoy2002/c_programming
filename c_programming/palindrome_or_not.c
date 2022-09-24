#include <stdio.h>

void main(){

    int original_number, number, reverse = 0, reminder;

    printf("Enter the value of number: ");
    scanf("%d", &number);
    original_number = number;

    while(number != 0){
        reminder = number % 10;
        reverse = reverse * 10 + reminder;
        number /= 10;
    }

    printf("%d is ", original_number);
    if(original_number == reverse) printf("Palindrome.");
    else printf("not palindrome");
}

#include <stdio.h>

/*
Calculate the sum of a series like : 7 + 10 + 13 + 16 + ... + nth using while loop.
Sample input : 3
Sample output : 30 => (sum of 7 + 10 + 13)
*/
void main (){
    int sum = 0, start = 7, n;

    printf("Enter the value of n : ");
    scanf("%d", &n);

    while(n){
        sum += start;
        start += 3;
        n--;
    }

    printf("The result is : %d", sum);
}
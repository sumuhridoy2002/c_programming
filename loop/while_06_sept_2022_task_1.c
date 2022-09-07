#include <stdio.h>

/*
Calculate the sum of a series like : 1 + 2 + 3 + 4 + 5 + 6 + 7 + ... + n using while loop.
Sample input : 5
Sample output : 15
*/
void main (){
    int sum = 0, start = 1, n;

    printf("Enter the value of n : ");
    scanf("%d", &n);

    while(start <= n){
        sum += start;
        start++;
    }

    printf("The result is : %d", sum);
}
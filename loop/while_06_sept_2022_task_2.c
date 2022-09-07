#include <stdio.h>

/*
Calculate the sum of a series like : 2 + 4 + 6 + 8 + ... + 2n using while loop.
Sample input : 3
Sample output : 12 => (sum of 2 + 4 + 6)
*/
void main (){
    int sum = 0, start = 2, n;

    printf("Enter the value of n : ");
    scanf("%d", &n);

    while(start <= (2 * n)){
        sum += start;
        start += 2;
    }

    printf("The result is : %d", sum);
}
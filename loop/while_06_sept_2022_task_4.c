#include <stdio.h>

/*
Calculate the sum of a series like : + 1 - 2 + 3 - 4 + 5 - 6 + 7 - 8 + .. + nth using while loop.
Sample input : 1 , 2 , 3 , 4 , 5 , 6
Sample output : 1 , -1 , 2 , -2 , 3 , -3
*/
void main (){
    int sum = 0, start = 1, n;

    printf("Enter the value of n : ");
    scanf("%d", &n);

    while(start <= n){
        if((start % 2) == 0)
            sum -= start;
        else if((start % 2) == 1)
            sum += start;
        start++;
    }

    printf("The result is : %d \n", sum);
}
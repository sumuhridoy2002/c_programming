#include <stdio.h>

// Input : 7
// Output : 0, 1, 1, 2, 3, 5, 8

void main(){

    int i, n, temp, pre = 0, post = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    if(n < 3) return;

    printf("%d, %d, ", pre, post);

    for(i = 1; i <= (n - 2); i++){
        printf("%d", pre + post);
        if(i != (n - 2)) printf(", ");
        temp = post;
        post = pre + post;
        pre = temp;
    }
}

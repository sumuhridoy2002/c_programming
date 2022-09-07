
#include <stdio.h>

/*
Print using while loop : 100, 97, 94, ...., 1
*/

void main(){
    int start = 100;

    while(start >= 1){
        printf("%d \n", start);
        // start = start - 3;
        start -= 3;
    }
}

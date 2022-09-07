#include <stdio.h>

int isSmall(target, compareTo){
    if(target < compareTo){
        return 1;
    }
    return 0;
}

void printInWhile(start, end){
    int isStartSmall = isSmall(start, end);
    if(isStartSmall){
        while(start <= end){
            printf("%d \n", start);
            start++;
        }
    }else{
        while(start >= end){
            printf("%d \n", start);
            start--;
        }
    }
}

void main(){
    int start, end;

    printf("Write starting number :");
    scanf("%d", &start);

    printf("Write ending number :");
    scanf("%d", &end);

    printInWhile(start, end);
}
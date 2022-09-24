#include <stdio.h>

void reverse(){
    char sentence;
    scanf("%c", &sentence);

    if(sentence != '\n'){
        reverse();
        printf("%c", sentence);
    }
}

void main(){
    printf("Write a sentence: ");
    reverse();
}

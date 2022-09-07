#include <stdio.h>

void main(){
    int score;

    printf("Enter the score: ");

    scanf("%d", &score);

    switch(score){
        case 50:
            printf("Half century !");
            break;
        case 100:
            printf("Century !");
            break;
        default:
            printf("You scored %d", score);
            break;
    }
}
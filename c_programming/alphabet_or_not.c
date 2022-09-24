#include <stdio.h>

void main(){

    char alphabet;

    printf("Enter a alphabet: ");
    scanf("%c", &alphabet);

    if((alphabet >= 'a' && alphabet <= 'z') || (alphabet >= 'A' && alphabet <= 'Z')) printf("Alphabet.\n");
    else printf("Not an alphabet.\n");
}

#include <stdio.h>

/*
Show grade based on user inputed marks.
*/

void main(){
    // Define a variable named marks
    float marks;

    ask:
        // Show a message to take a marks from user
        printf("Enter examination marks : ");

        // Assign the taken marks into the defined variable
        scanf("%f", &marks);

        if(marks > 100 || marks < 0) {
            printf("Invalid mark inputed.\n");
            goto ask;
        }

        // Show a prefix called "Grade"
        printf("Grade: ");

        // Determine the grade
        if(marks >= 90) printf("A+");
        else if(marks >= 85) printf("A");
        else if(marks >= 80) printf("A-");
        else if(marks >= 75) printf("B+");
        else if(marks >= 70) printf("B");
        else if(marks >= 65) printf("B-");
        else if(marks >= 60) printf("C+");
        else if(marks >= 55) printf("C");
        else if(marks >= 50) printf("C-");
        else if(marks >= 45) printf("D+");
        else if(marks >= 40) printf("D");
        else printf("F");

        // Add a new line after execution
        printf("\n");

    goto ask;
}

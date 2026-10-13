#include<stdio.h>
#include<stdlib.h>

int main() {
    char sName[30];
    int iAge = 0;
    float fMarks = 0.0f;

    printf("Enter your name: \n");
    scanf("%[^'\n']s", sName);

    printf("Enter your age: \n");
    scanf("%d", &iAge);

    printf("Enter your marks: \n");
    scanf("%f", &fMarks);

    printf("\nWelcome %s\n",sName);
    printf("Your Age: %d\n",iAge);
    printf("Your Marks: %f\n",fMarks);

    return EXIT_SUCCESS;
}
#include<stdio.h>
#include<stdlib.h>

int main() {
    char cName = '\0';
    char sName[30];

    printf("Enter your name: ");
    scanf("%[^# \n]", sName);           // Ends input when # or enter pressed
    getchar();                          // Consumes character in input buffer (# if added)
    getchar();

    printf("Enter char: ");
    scanf("%c", &cName);


    printf("Welcome %s\n",sName);
    printf("Welcome %c\n",cName);
    printf("Welcome %d\n",cName);

    return EXIT_SUCCESS;
}
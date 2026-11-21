#include<stdio.h>
#include<stdlib.h>

int displaySummation(int iNo) {
    return (iNo * (iNo + 1)) / 2;
}

int main () {

    int iResult = 0;
    int iValue = 0;
    printf("Enter frequency: \n");
    scanf("%d", &iValue);

    iResult = displaySummation(iValue);
    printf("Sum is: %d\n", iResult);

    return EXIT_SUCCESS;
}
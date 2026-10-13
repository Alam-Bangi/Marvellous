#include<stdio.h>
#include<stdlib.h>

int minimum(int iNo1, int iNo2) {
    if(iNo1 < iNo2) {
        return iNo1;
    } else {
        return iNo2;
    }
}
int main() {
    int iValue1 = 0;
    int iValue2 = 0;
    int iResult = 0;

    printf("Enter number 1: ");
    scanf("%d", &iValue1);

    printf("Enter number 2: ");
    scanf("%d", &iValue2);

    iResult = minimum(iValue1, iValue2);
    printf("Minimum is %d\n", iResult);

    return EXIT_SUCCESS;
}
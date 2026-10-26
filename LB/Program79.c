#include<stdio.h>
#include<stdlib.h>

int displaySum(int iNo) {
    int iCnt = 0;
    int iSum = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++) {
        iSum += iCnt;
    }
    return iSum;
}

int main () {

    int iResult = 0;
    int iValue = 0;
    printf("Enter frequency: \n");
    scanf("%d", &iValue);

    iResult = displaySum(iValue);
    printf("Sum is: %d\n", iResult);

    return EXIT_SUCCESS;
}
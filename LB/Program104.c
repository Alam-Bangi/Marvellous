#include<stdio.h>
#include<stdlib.h>

void checkPerfectNumber(int iNo) {
    int iCnt = 0;
    int iSum = 0;
    for(iCnt = 1; iCnt <= (iNo/2); iCnt++) {
        if(iNo % iCnt == 0) {
            iSum += iCnt;
        }
    }
    if(iSum == iNo) {
        printf("%d is perfect number\n", iNo);
    } else {
        printf("%d is not perfect number\n", iNo);
    }
}

int main() {
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    checkPerfectNumber(iValue);

    return EXIT_SUCCESS;
}

// Time Complexity : O(n/2)
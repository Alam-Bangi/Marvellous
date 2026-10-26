#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool checkPrime(int iNo) {
    int iCnt = 0;

    for(iCnt = 2; iCnt <= (iNo/2); iCnt++) {
        if((iNo % iCnt) == 0) {
            break;
        }
    }
    if(iCnt == (iNo/2)+1) {
        return true;
    }
    return false;
}

int main() {
    int iValue = 0;
    bool bRet = false;

    printf("Enter number: ");
    scanf("%d", &iValue);

    bRet = checkPrime(iValue);

    if(bRet) {
        printf("Prime number\n");
    } else {
        printf("Not prime number\n");
    }

    return EXIT_SUCCESS;
}

// Time Complexity : O(n/2)
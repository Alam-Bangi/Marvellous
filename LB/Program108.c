#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool checkPrime(int iNo) {
    int iCnt = 0;
    int iSum = 0;
    for(iCnt = 1; iCnt <= (iNo/2); iCnt++) {
        if((iNo % iCnt) == 0) {
            iSum += iCnt;
        }
    }
    if(iSum == 1) {
        return true;
    } else {
        return false;
    }
}

// void main(void) Error
// int main(void)
int main() {
    int iValue = 0;
    bool bRet = false;

    printf("Enter number: ");
    scanf("%d", &iValue);

    bRet = checkPrime(iValue);

    if(bRet == true) {
        printf("Prime number\n");
    } else {
        printf("Not prime number\n");
    }

    return EXIT_SUCCESS;
}

// Time Complexity : O(n/2)
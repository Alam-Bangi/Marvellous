#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void checkPrime(int iNo) {
    int iCnt = 0;
    int iSum = 0;
    for(iCnt = 1; iCnt <= (iNo/2); iCnt++) {
        if((iNo % iCnt) == 0) {
            iSum += iCnt;
        }
    }
    if(iSum == 1) {
        printf("Prime number\n");
    } else {
        printf("Not Prime number\n");
    }
}

// void main(void) Error
// int main(void)
int main() {
    int iValue = 0;
    bool ans = false;

    printf("Enter number: ");
    scanf("%d", &iValue);

    checkPrime(iValue);

    return EXIT_SUCCESS;
}

// Time Complexity : O(n/2)
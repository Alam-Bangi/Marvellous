#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool checkPerfectNumber(int iNo) {
    int iCnt = 0;
    int iSum = 0;
    for(iCnt = 1; iCnt <= (iNo/2); iCnt++) {
        if(iNo % iCnt == 0) {
            iSum += iCnt;
        }
    }
//    if(iSum == iNo) {
//        return true;
//    }
//    return false;
    return (iSum == iNo);
}

int main() {
    int iValue = 0;
    bool ans = false;

    printf("Enter number: ");
    scanf("%d", &iValue);

    ans = checkPerfectNumber(iValue);
    if(ans == true) {
        printf("%d is perfect number\n", iValue);
    } else {
    printf("%d is not perfect number\n", iValue);
    }

    return EXIT_SUCCESS;
}

// Time Complexity : O(n/2)
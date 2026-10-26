#include<stdio.h>
#include<stdlib.h>

int countDigits(int iNo) {
    int iDigit = 0;
    int iCount = 0;

    if(iNo < 0) {
        iNo = -iNo;
    }
    while(iNo != 0) {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        iCount++;
    }
    return iCount;
}

int sumDigits(int iNo) {
    int iDigit = 0;
    int iSum = 0;

    if(iNo < 0) {
        iNo = -iNo;
    }
    while(iNo != 0) {
        iDigit = iNo % 10;
        iSum += iDigit;
        iNo = iNo / 10;
    }
    return iSum;
}

float avgDigits(int iTotal, int iFreq) {
    float fAns = 0.0f;
    fAns = (float)iTotal / (float)iFreq;
    return fAns;
}
int main() {
    int iValue = 0, iSum = 0, iCount = 0;
    float fAvg = 0.0f;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iSum = sumDigits(iValue);
    iCount = countDigits(iValue);

    fAvg = avgDigits(iSum, iCount);
    printf("Number of digits : %d\n", iCount);
    printf("Summation of digits : %d\n", iSum);
    printf("Average of digits : %.2f\n", fAvg);

    return EXIT_SUCCESS;
}

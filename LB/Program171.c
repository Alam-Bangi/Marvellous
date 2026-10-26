#include<stdio.h>
#include<stdlib.h>

float averageDigits(int iNo) {
    int iDigit = 0, iSum = 0, iCount = 0;
    float fAvg = 0.0f;

    if(iNo < 0) {
        iNo = -iNo;
    }
    while(iNo != 0) {
        iDigit = iNo % 10;
        iSum += iDigit;
        iCount++;
        iNo = iNo / 10;
    }
    fAvg = (float)iSum / (float)iCount;
    return fAvg;
}

int main() {
    int iValue = 0;
    float fRet = 0.0f;

    printf("Enter number : ");
    scanf("%d", &iValue);

    fRet = averageDigits(iValue);
    printf("Average of digits : %.2f\n", fRet);

    return EXIT_SUCCESS;
}

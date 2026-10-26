#include<stdio.h>
#include<stdlib.h>

float averageDigits(int iNo) {
    int iDigit = 0;
    int iCount = 0;
    int iSum = 0;
    float fAns = 0.0f;

    if(iNo < 0) {
        iNo = -iNo;
    }
    while(iNo != 0) {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        iSum += iDigit;
        iCount++;
        fAns = iSum / iCount;
        printf("%f\n", fAns);
    }
    return fAns;
}

int main() {
    int iValue = 0;
    float fRet = 0.0f;

    printf("Enter number : ");
    scanf("%d", &iValue);

    fRet = averageDigits(iValue);
    printf("Average of digits : %f\n", fRet);

    return EXIT_SUCCESS;
}

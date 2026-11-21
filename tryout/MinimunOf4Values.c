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
    int iValue1 = 10;
    int iValue2 = 5;
    int iValue3 = 25;
    int iValue4 = 32;
    int iResult1 = 0;
    int iResult2 = 0;
    int iFinalResult = 0;

//    printf("Enter number 1: ");
//    scanf("%d", &iValue1);
//
//    printf("Enter number 2: ");
//    scanf("%d", &iValue2);

    iFinalResult = minimum((minimum(iValue1, iValue2)), (minimum(iValue3, iValue4)));

//    iResult1 = minimum(iValue1, iValue2);
//    iResult2 = minimum(iValue3, iValue4);
//    iFinalResult = minimum(iResult1, iResult2);
    printf("Minimum is %d\n", iFinalResult);

    return EXIT_SUCCESS;
}
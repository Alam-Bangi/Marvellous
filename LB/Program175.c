#include<stdio.h>
#include<stdlib.h>

int reverse(int iNo) {
    int iDigit = 0, iRev = 0;
    while(iNo != 0) {
        iDigit = iNo  % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;
    }
    return iRev;
}
int main() {
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = reverse(iValue);
    printf("Reverse of number is : %d\n", iRet);

    return EXIT_SUCCESS;
}

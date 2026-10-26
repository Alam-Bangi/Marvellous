#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool checkPalindrome(int iNo) {
    int iDigit = 0, iRev = 0;

    while(iNo != 0) {
        iDigit = iNo  % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;
    }
    if(iRev == iTemp) {     // Issue
        return true;
    }
    return false;
}
int main() {
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : ");
    scanf("%d", &iValue);

    bRet = checkPalindrome(iValue);
    if(bRet == true) {
        printf("Number is palindrome\n");
    } else {
        printf("Number is not palindrome\n");
    }

    return EXIT_SUCCESS;
}

#include<stdio.h>
#include<stdlib.h>

int maximum(int iNo1, int iNo2, int iNo3) {
    if(iNo1 > iNo2 && iNo1 > iNo3) {
        return iNo1;
    } else if(iNo2 > iNo1 && iNo2 > iNo3) {
        return iNo2;
    } else {
        return iNo3;
    }
}
int main() {
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;
    int iResult = 0;

    printf("Enter number 1: ");
    scanf("%d", &iValue1);

    printf("Enter number 2: ");
    scanf("%d", &iValue2);

    printf("Enter number 3: ");
    scanf("%d", &iValue3);

    iResult = maximum(iValue1, iValue2, iValue3);
    printf("Maximum is %d\n", iResult);

    return EXIT_SUCCESS;
}
#include<stdio.h>
#include<stdlib.h>

float average(int iNo1, int iNo2, int iNo3) {
    float fAns = 0.0f;
    fAns = ((float) (iNo1 + iNo2 + iNo3) / 3);   // Type-casting
    return fAns;
}
int main() {
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;
    float fResult = 0.0f;

    printf("Enter number 1: ");
    scanf("%d", &iValue1);

    printf("Enter number 2: ");
    scanf("%d", &iValue2);

    printf("Enter number 3: ");
    scanf("%d", &iValue3);

    fResult = average(iValue1, iValue2, iValue3);
    printf("Average is %f\n", fResult);

    return EXIT_SUCCESS;
}
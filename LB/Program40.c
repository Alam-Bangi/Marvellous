#include<stdio.h>
#include<stdlib.h>

int main() {
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number 1: ");
    scanf("%d", &iValue1);

    printf("Enter number 2: ");
    scanf("%d", &iValue2);

    if(iValue1 > iValue2) {
            printf("Maximum is %d\n",iValue1);
        } else {
            printf("Maximum is %d\n",iValue2);
        }

    return EXIT_SUCCESS;
}
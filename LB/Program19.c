#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool checkEven(int no) {
    if (no % 2 == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int no = 0;
    bool bRet = false;

    printf("Enter number : ");
    scanf("%d", &no);

    bRet = checkEven(no);
    if (bRet == true) {
        printf("Even Number \n");
    } else {
        printf("Odd Number \n");
    }

    return EXIT_SUCCESS;
}
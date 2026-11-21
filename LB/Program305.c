#include<stdio.h>
#include<stdlib.h>

int main() {
    float arr[4] = {0.0f};
    int iCnt = 0;

    printf("Enter elements of array : \n");
    for(iCnt = 0; iCnt < 4; iCnt++) {
        scanf("%f", &arr[iCnt]);
    }

    printf("Elements of array are : \n");
    for(iCnt = 0; iCnt < 4; iCnt++) {
        printf("%f\n", arr[iCnt]);
    }

    return EXIT_SUCCESS;
}

/*
    alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/LB$ ./a.out
    Enter elements of array :
    12.1
    34.3
    56.5
    78.7
    Elements of array are :
    12.100000
    34.299999
    56.500000
    78.699997
*/
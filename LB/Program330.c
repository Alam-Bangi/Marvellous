#include<stdio.h>
#include<stdlib.h>

int Summation(int arr[], int iLength){
    int iCnt = 0, iSum = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++) {
        iSum += arr[iCnt];
    }
    return iSum;
}

float Average(int arr[], int iLength) {
    float fAvg = 0.0f;
    int iCnt = 0, iSum = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++) {
        iSum += arr[iCnt];
    }
    return (float)iSum/iLength;
}

int main() {
    int *ptr = NULL;
    int iSize = 0, iCnt = 0, iRet = 0;
    float fRet = 0.0f;

    printf("Enter number of elements you want : ");
    scanf("%d", &iSize);

//   Step 1 : Allocate the memory
    ptr = (int *)malloc(sizeof(int) * iSize);

//    Step 2 : Use the memory
    printf("Enter elements : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++) {
        scanf("%d", &ptr[iCnt]);
    }

    iRet = Summation(ptr, iSize);
    printf("Addition of all elements is : %d\n", iRet);

    fRet = Average(ptr, iSize);
    printf("Average of all elements is : %d\n", fRet);

//    Step 3 : Free the memory
    free(ptr);

    return EXIT_SUCCESS;
}

/*
    alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/LB$ ./a.out
    Enter number of elements you want : 5
    Enter elements :
    10
    20
    30
    40
    50
    Addition of all elements is : 150
*/
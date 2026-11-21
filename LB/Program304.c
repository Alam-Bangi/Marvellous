#include<stdio.h>
#include<stdlib.h>

int main() {
    int arr[4] = {0};
    int iCnt = 0;

    printf("Enter elements of array : \n");
    for(iCnt = 0; iCnt < 4; iCnt++) {
        scanf("%d", &arr[iCnt]);
    }

    printf("Elements of array are : \n");
    for(iCnt = 0; iCnt < 4; iCnt++) {
        printf("%d\n", arr[iCnt]);
    }

    return EXIT_SUCCESS;
}

/*
    alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/LB$ ./a.out
    Enter elements of array :
    11
    21
    51
    101
    Elements of array are :
    11
    21
    51
    101
*/
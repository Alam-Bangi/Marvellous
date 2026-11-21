#include<stdio.h>
#include<stdlib.h>

int main() {
    int arr[4] = {0};
    int iCnt = 0;

    printf("Enter elements of array : \n");

    scanf("%d", &arr[0]);
    scanf("%d", &arr[1]);
    scanf("%d", &arr[2]);
    scanf("%d", &arr[3]);

    printf("Elements of array are : \n");
    for(iCnt = 0; iCnt < 4; iCnt++) {
        printf("%d\n", arr[iCnt]);
    }

    return EXIT_SUCCESS;
}

/*
    alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/LB$ ./a.out
    Enter elements of array :
    12
    34
    56
    78
    Elements of array are :
    12
    34
    56
    78
*/
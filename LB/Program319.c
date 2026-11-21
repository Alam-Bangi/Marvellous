#include<stdio.h>
#include<stdlib.h>

void display(int arr[], int iLength){
    int iCnt = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++) {
        printf("%d\n", arr[iCnt]);
    }
}

int main() {
    int brr[7] = {11, 21, 51, 101, 111, 121, 151};

    display(brr, 7);

    return EXIT_SUCCESS;
}

/*
    alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/LB$ ./a.out
    11
    21
    51
    101
    111
    121
    151
*/
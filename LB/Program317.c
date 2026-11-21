#include<stdio.h>
#include<stdlib.h>

void display(int ptr[]){
    int iCnt = 0;
    for(iCnt = 0; iCnt < 5; iCnt++) {
        printf("%d\n", ptr[iCnt]);
    }
}

int main() {
    int arr[7] = {11, 21, 51, 101, 111, 121, 151};

    display(arr);

    return EXIT_SUCCESS;
}

/*
    alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/LB$ ./a.out
    11
    21
    51
    101
    111
*/
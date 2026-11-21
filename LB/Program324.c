#include<stdio.h>
#include<stdlib.h>

int main() {
    int *ptr = NULL;
    int iSize = 0, iCnt = 0;

    printf("Enter number of elements you want : ");
    scanf("%d", &iSize);

//   Step 1 : Allocate the memory
    ptr = (int *)malloc(sizeof(int) * iSize);

//    Step 2 : Use the memory
    printf("Enter elements : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++) {
        scanf("%d", &ptr[iCnt]);
    }

//    Step 3 : Free the memory
    free(ptr);

    return EXIT_SUCCESS;
}

/*
    alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/LB$ ./a.out
    Enter number of elements you want : 4
    Enter elements :
    11
    21
    51
    101
*/
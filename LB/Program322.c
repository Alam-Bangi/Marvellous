#include<stdio.h>
#include<stdlib.h>

int main() {
    int *ptr = NULL;
    int iSize = 0;

    printf("Enter number of elements you want : ");
    scanf("%d", &iSize);

    ptr = (int *)malloc(sizeof(int) * iSize);

    return EXIT_SUCCESS;
}

/*
    alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/LB$ ./a.out

*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    char arr[20] = "Info Marvel";
    char *ptr = NULL;
    int iCount = 0;

    ptr = &(arr[0]);

    while (*ptr != '\0'){
        iCount++;
        ptr++;
    }
    printf("Length of string is : %d\n", iCount);

    return EXIT_SUCCESS;
}

/*
    alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/LB$ ./a.out
    Length of string is : 11
*/
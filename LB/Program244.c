#include<stdio.h>
#include<stdlib.h>
#include<string.h>          // For inbuilt string operations

int strlenX(char *str) {
    int iCount = 0;

    iCount = strlen(str);
    return iCount;
}

int main() {
    char arr[100] = {'\0'};
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s", arr);

    iRet = strlen(arr);                         // Inbuilt function
    printf("String length is : %d\n", iRet);

    return EXIT_SUCCESS;
}

/*
    alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/LB$ ./a.out
    Enter string : Alam Bangi
    String length is : 10
*/
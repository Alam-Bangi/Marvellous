#include<stdio.h>
#include<stdlib.h>

int countX(char *str) {
    int iCount = 0;

    while(*str != '\0') {
        if (*str == 'A') {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main() {
    char arr[100] = {'\0'};
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s", arr);

    iRet = countX(arr);
    printf("Occurences of A is : %d\n", iRet);

    return EXIT_SUCCESS;
}

/*
    alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/LB$ ./a.out
    Enter string : Alam Bangi
    Occurences of A is : 1
*/
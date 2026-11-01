#include<stdio.h>
#include<stdlib.h>

int countDigits(char *str) {
    int iCount = 0;

    while(*str != '\0') {
        if (*str >= '0' && *str <= '9') {
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

    iRet = countDigits(arr);
    printf("Count of digits in string are  : %d\n", iRet);

    return EXIT_SUCCESS;
}

/*
    alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/LB$ ./a.out
    Enter string : Alam@1234
    Count of digits in string are  : 4
*/
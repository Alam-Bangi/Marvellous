#include<stdio.h>
#include<stdlib.h>

int countcapitalX(char *str) {
    int iCount = 0;

    while(*str != '\0') {
        if (*str >= 'A' && *str <= 'Z') {
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

    iRet = countcapitalX(arr);
    printf("Count of capital letters in string are  : %d\n", iRet);

    return EXIT_SUCCESS;
}

/*
    alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/LB$ ./a.out
    Enter string : HELLO world
    Count of small letters in string are  : 5
*/
// $ % & # *

#include<stdio.h>
#include<stdlib.h>

int countSpecialX(char *str) {
    int iCount = 0;

    while(*str != '\0') {
        if (*str == '$' || *str == '%' || *str == '&' || *str == '#' || *str == '*') {
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

    iRet = countSpecialX(arr);
    printf("Count of special characters in string are  : %d\n", iRet);

    return EXIT_SUCCESS;
}

/*
    alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/LB$ ./a.out
    Enter string : Demo#Pune%Java$
    Count of special characters in string are  : 3
*/
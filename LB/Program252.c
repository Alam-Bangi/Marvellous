#include<stdio.h>
#include<stdlib.h>

int countX(char *str) {
    int iCount = 0;

    while(*str != '\0') {
        if (*str == 'a' || *str == 'b' || *str == 'c' || *str == 'd') {
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
    printf("Count of a/b/c/d in string are  : %d\n", iRet);

    return EXIT_SUCCESS;
}

/*
    alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/LB$ ./a.out
    Enter string : abhinandan
    Count of a/b/c/d in string are  : 5
*/
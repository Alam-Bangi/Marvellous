#include<stdio.h>
#include<stdlib.h>

int countVowels(char *str) {
    int iCount = 0;

    while(*str != '\0') {
        if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u') {
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

    iRet = countVowels(arr);
    printf("Count of vowels in string are  : %d\n", iRet);

    return EXIT_SUCCESS;
}

/*
    alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/LB$ ./a.out
    Enter string : We are in Marvellous
    Count of vowels in string are  : 8
*/
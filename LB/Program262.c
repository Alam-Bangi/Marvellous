#include<stdio.h>
#include<stdlib.h>

void countFrequency(char *str) {
    int iCountSmall = 0, iCountCapital = 0, iCountDigit = 0;

    while(*str != '\0') {
        if (*str >= 'a' && *str <= 'z') {
            iCountSmall++;
        } else if (*str >= 'A' && *str <= 'Z') {
            iCountCapital++;
        } else if (*str >= '0' && *str <= '9'){
            iCountDigit++;
        }
        str++;
    }
    printf("Freq of small letters : %d\n", iCountSmall);
    printf("Freq of capital letters : %d\n", iCountCapital);
    printf("Freq of digits : %d\n", iCountDigit);
}

int main() {
    char arr[100] = {'\0'};

    printf("Enter string : ");
    scanf("%[^'\n']s", arr);

    countFrequency(arr);

    return EXIT_SUCCESS;
}

/*
    alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/LB$ ./a.out
    Enter string : MARVEllous@123#
    Freq of small letters : 5
    Freq of capital letters : 5
    Freq of digits : 3
*/
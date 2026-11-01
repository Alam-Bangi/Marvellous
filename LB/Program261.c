#include<stdio.h>
#include<stdlib.h>

void countFrequency(char *str) {
    int iCountSmall = 0, iCountCapital = 0, iCountDigit = 0;

    while(*str != '\0') {
        if (*str >= 'a' && *str <= 'z') {
            iCountSmall++;
        } else if (*str >= 'A' && *str <= 'Z') {
            iCountCapital++;
        } else {
            iCountDigit++;                          // Counts everything except letters
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
    Enter string : MARVELLOUS9876infosystem
    Freq of small letters is : 10
    Freq of capital letters is : 10
    Freq of digits is : 4

    alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/LB$ ./a.out
    Enter string : MARVELLOUS 9876 infosystem
    Freq of small letters is : 10
    Freq of capital letters is : 10
    Freq of digits is : 6

    alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/LB$ ./a.out
    Enter string : MARVE@12345llous
    Freq of small letters : 5
    Freq of capital letters : 5
    Freq of digits : 6
*/
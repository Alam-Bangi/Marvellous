/*
    Input : 4
    Output : A  B   C   D
*/

#include<stdio.h>
#include<stdlib.h>

int main() {
    char ch = '\0';

    for(ch = 'A'; ch <= 'D'; ch++) {
        printf("%c", ch);
    }
    printf("\n");

    return EXIT_SUCCESS;
}

/*

ASCII VALUE

alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/LB$ ./a.out
A   B   C   D
*/
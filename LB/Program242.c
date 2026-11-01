#include<stdio.h>
#include<stdlib.h>

void display(char *str) {
    while (*str != '\0') {
        printf("%c\n", *str);
        str++;
    }
}

int main() {
    char arr[100];

    printf("Enter string : ");
    scanf("%[^'\n']s", arr);

    display(arr);

    return EXIT_SUCCESS;
}

/*
    alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/LB$ ./a.out
    Enter string : Fast and Furious
    F
    a
    s
    t

    a
    n
    d

    F
    u
    r
    i
    o
    u
    s
*/
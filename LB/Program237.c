#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    char arr[20] = "Info Marvel";
    char *ptr = NULL;

    ptr = &(arr[0]);

    while (*ptr != '\0'){
        printf("%c\n", *ptr);
        ptr++;
    }

    return EXIT_SUCCESS;
}

/*
    alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/LB$ ./a.out
    I
    n
    f
    o

    M
    a
    r
    v
    e
    l
*/
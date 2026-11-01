#include<stdio.h>
#include<stdlib.h>

void display(char *str) {       // Call by address
    printf("%s\n", str);
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
    Enter string : Pune Maharashtra India
    Pune Maharashtra India
*/
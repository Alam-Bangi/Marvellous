#include<stdio.h>
#include<stdlib.h>

void display(char str[]) {
    printf("%s\n", str);
}

int main() {
    char arr[] = "Marvel";

    display(arr);

    return EXIT_SUCCESS;
}
/*
    alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/LB$ ./a.out
    Marvel
*/
#include<stdio.h>

int main() {
    const int no = 11;
    int *p = &no;

    printf("%d\n", *p);

    return 0;
}

/*
alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/PPA$ gcc Pointer.c -o Myexe -w
alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/PPA$ ./Myexe
11
*/
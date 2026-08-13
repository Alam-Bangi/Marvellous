#include<stdio.h>

int main() {
    printf("%d\n", sizeof(3.14));
    printf("%d\n", sizeof(3.14f));

    return 0;
}


/*
alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/PPA$ gcc PointerDemo2.c -o Myexe -w
alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/PPA$ ./Myexe
8
4
*/
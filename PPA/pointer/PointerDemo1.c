#include<stdio.h>

int main() {
    char ch = 'A';
    int no = 11;
    float marks = 90.78f;
    double d = 90.56789;

    printf("%d\n", sizeof(ch));
    printf("%d\n", sizeof(no));
    printf("%d\n", sizeof(marks));
    printf("%d\n", sizeof(d));

    return 0;
}

/*
alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/PPA$ gcc PointerDemo1.c -o Myexe -w
alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/PPA$ ./Myexe
1
4
4
8
*/
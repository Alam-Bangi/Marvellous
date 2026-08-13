#include<stdio.h>

#pragma pack(1) // 1 2 4 8
struct Demo{
    int i;
    char ch;
    float f;
};

int main() {
    printf("%d\n", sizeof(struct Demo));

    return 0;
}
/*
alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/PPA$ gcc Struct_Demo3.c -o Myexe -w
alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/PPA$ ./Myexe
9
*/
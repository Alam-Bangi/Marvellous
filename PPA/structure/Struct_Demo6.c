#include<stdio.h>

#pragma pack(1)
struct Demo{
    int no;
    float f;
    int *p;
};

int main() {
    int x = 11;
    struct Demo dobj;
    dobj.no = 21;
    dobj.f = 90.99;
    dobj.p = &x;

    printf("%d\n", *(dobj.p));


    return 0;
}
/*
alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/PPA$ gcc Struct_Demo6.c -o Myexe -w
alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/PPA$ ./Myexe
11
*/
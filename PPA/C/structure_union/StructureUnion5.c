#include<stdio.h>

#pragma pack[1]
struct Demo {
    int i;
    float f;
    struct Hello {
        int no;
        float marks;
    }hobj;
};

int main() {
    struct Demo dobj;
    printf("%d\n", sizeof(dobj));
    dobj.i = 11;
    dobj.f = 3.14;

    dobj.hobj.no = 21;
    dobj.hobj.marks = 90.78;

    return 0;
}

/*
alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/PPA/structure_union$ gcc StructureUnion5.c -o Myexe -w
alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/PPA/structure_union$ ./Myexe
16
*/
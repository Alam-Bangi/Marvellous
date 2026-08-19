#include<stdio.h>

#pragma pack[1]
struct Demo {
    int i;
    float f;
    struct Hello {
        int no;
        float marks;
    };
};

int main() {
    struct Demo dobj;
    printf("%d\n", sizeof(dobj));

    return 0;
}

/*
alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/PPA/structure_union$ gcc StructureUnion4.c -o Myexe -w
alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/PPA/structure_union$ ./Myexe
8
*/
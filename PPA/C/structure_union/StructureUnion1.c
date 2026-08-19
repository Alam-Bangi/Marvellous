#include<stdio.h>

#pragma pack[1]
struct Demo {
    int i;
    float f;
    double d;
};

int main() {
    printf("%d\n", sizeof(struct Demo));

    return 0;
}

/*
alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/PPA/structure_union$ gcc StructureUnion1.c -o Myexe -w
alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/PPA/structure_union$ ./Myexe
16
*/
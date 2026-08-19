#include<stdio.h>

#pragma pack[1]
union Demo {
    int i;
    float f;
    double d;
};

int main() {
    printf("%d\n", sizeof(union Demo));

    return 0;
}

/*
alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/PPA/structure_union$ gcc StructureUnion2.c -o Myexe -w
alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/PPA/structure_union$ ./Myexe
8
*/
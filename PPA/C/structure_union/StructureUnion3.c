#include<stdio.h>

#pragma pack[1]
struct Demo {
    int i;
    float f;
    double d;
};

int main() {
    struct Demo dobj;
    dobj.i = 12;
    dobj.f = 3.14;
    dobj.d = 9.6789;
    printf("%d\n", dobj.i);
    printf("%f\n", dobj.f);
    printf("%lf\n", dobj.d);

    return 0;
}

/*
alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/PPA/structure_union$ gcc StructureUnion3.c -o Myexe -w
alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/PPA/structure_union$ ./Myexe
12
3.140000
9.678900
*/
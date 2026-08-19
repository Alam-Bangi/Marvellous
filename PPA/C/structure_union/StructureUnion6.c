#include<stdio.h>

union Demo {
    int i;
    float f;
};

int main() {
    union Demo dobj;
    dobj.f = 12.23;
    printf("%f\n", dobj.f);
    printf("%d\n", dobj.i);

    return 0;
}

/*
alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/PPA/structure_union$ gcc StructureUnion6.c -o Myexe -w
alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/PPA/structure_union$ ./Myexe
12.230000
1094954516
*/
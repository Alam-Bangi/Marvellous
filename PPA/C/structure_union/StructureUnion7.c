#include<stdio.h>

union Demo {
    int i;
    char ch;
};

int main() {
    union Demo dobj;
    dobj.i = 65;
    printf("%d\n", dobj.i);
    printf("%c\n", dobj.ch);

    return 0;
}

/*
alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/PPA/structure_union$ gcc StructureUnion7.c -o Myexe -w
alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/PPA/structure_union$ ./Myexe
97
a
*/
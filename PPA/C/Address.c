#include <stdio.h>

int main() {
    char ch = 'A';          // 1 byte
    int no = 11;             // 4 byte
    float f = 3.14f;       // 4 byte
    double d = 90.786534;   // 8 byte

    printf("%d \n", no);
    printf("%d \n", sizeof(no));
    printf("%d \n", &no);

    return 0;
}

// gcc Address.c -o Myexe
// ./Myexe
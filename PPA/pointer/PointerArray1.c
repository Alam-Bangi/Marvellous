#include<stdio.h>

int main() {
    int arr[] = {11, 21, 51 , 101, 111};

    printf("%d\n", arr[2]);
    printf("%d\n", *(arr + 2));
    printf("%d\n", *(2 + arr));
    printf("%d\n", 2[arr]);

    return 0;
}

/*
alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/PPA$ gcc PointerArray1.c -o Myexe -w
alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/PPA$ ./Myexe
51
51
51
51
*/
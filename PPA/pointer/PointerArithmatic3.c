#include<stdio.h>

int main() {
    int arr[] = {11, 21, 51 , 101, 111};
    int *p = NULL;
    int *q = NULL;

    p = &(arr[1]);
    q = &(arr[3]);

    printf("%d\n", (q-p));


    return 0;
}

/*
alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/PPA$ gcc PointerArithmatic3.c -o Myexe -w
alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/PPA$ ./Myexe
2
*/
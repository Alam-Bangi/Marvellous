#include<stdio.h>

int main() {
    int arr[] = {10,20,30,40};

    printf("%d\n", arr[2]);
    printf("%d\n", *(arr+2));
    printf("%d\n", *(2+arr));
    printf("%d\n", 2[arr]);

    return 0;
}
/*
alam@LAPTOP-V9FN0GP1:~/PPA$ gcc ArrayPointer.c -o Myexe -w
  alam@LAPTOP-V9FN0GP1:~/PPA$ ./Myexe
  30
  30
  30
  30
*/
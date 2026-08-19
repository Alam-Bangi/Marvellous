#include<stdio.h>

// global variables
int value1 = 10;
int value2 = 12;
int ans = 0;
int main() {

    ans = value1 + value2;
    printf("Addition is : %d\n", ans);

    return 0;
}

/*
alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/PPA/function$ gcc FunctionDemo3.c -o Myexe
alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/PPA/function$ ./Myexe
Addition is : 22
*/
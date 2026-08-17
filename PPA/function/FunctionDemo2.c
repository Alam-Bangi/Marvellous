#include<stdio.h>

int main() {
//    local variables
    float value1 = 10.5f;
    float value2 = 12.2f;
    float ans = 0.0f;

    ans = value1 + value2;
    printf("Addition is : %f\n", ans);

    return 0;
}
/*
alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/PPA/function$ gcc FunctionDemo2.c -o Myexe
alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/PPA/function$ ./Myexe
Addition is : 22.700001
*/
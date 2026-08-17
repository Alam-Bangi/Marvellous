#include<stdio.h>



int main() {
    int value1 = 0, value2 = 0, ans = 0;

    printf("Enter number 1 : ");
    scanf("%d", &value1);

    printf("Enter number 2 : ");
    scanf("%d", &value2);

    ans = value1 + value2;      // Business Logic

    printf("Addition is : %d\n", ans);

    return 0;
}

/*
alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/PPA/function$ gcc FunctionDemo4.c -o Myexe
alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/PPA/function$ ./Myexe
Enter number 1 : 12
Enter number 2 : 23
Addition is : 35
*/
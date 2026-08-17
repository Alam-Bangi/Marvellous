#include<stdio.h>

int Addition(int no1, int no2) {
    int result = 0;
    result = no1 + no2;     // Business Logic

    return result;
}

int main() {
    int value1 = 0, value2 = 0, ans = 0;

    printf("Enter number 1 : ");
    scanf("%d", &value1);

    printf("Enter number 2 : ");
    scanf("%d", &value2);

    ans = Addition(value1, value2);
    printf("Addition is : %d\n", ans);

    return 0;
}

/*
alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/PPA/function$ gcc FunctionDemo6.c -o Myexe
alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/PPA/function$ ./Myexe
Enter number 1 : 26
Enter number 2 : 28
Addition is : 54
*/
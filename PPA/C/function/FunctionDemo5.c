#include<stdio.h>

void Addition(int no1, int no2) {
    int result = 0;
    result = no1 + no2;     // Business Logic

    printf("Addition is : %d\n", result);
}

int main() {
    int value1 = 0, value2 = 0;

    printf("Enter number 1 : ");
    scanf("%d", &value1);

    printf("Enter number 2 : ");
    scanf("%d", &value2);

    Addition(value1, value2);

    return 0;
}

/*
alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/PPA/function$ gcc FunctionDemo5.c -o Myexe
alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/PPA/function$ ./Myexe
Enter number 1 : 12
Enter number 2 : 28
Addition is : 40
*/
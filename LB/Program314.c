#include<stdio.h>
#include<stdlib.h>

void display(int ptr[]){
    printf("%d\n", ptr[0]);
    printf("%d\n", ptr[1]);
    printf("%d\n", ptr[2]);
    printf("%d\n", ptr[3]);
    printf("%d\n", ptr[4]);
}

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    display(arr);

    return EXIT_SUCCESS;
}

/*
    alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/LB$ ./a.out
    10
    20
    30
    40
*/
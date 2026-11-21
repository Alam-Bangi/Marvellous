#include<stdio.h>
#include<stdlib.h>

void display(int arr[]){

}

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

//    Hexadecimal values
    printf("%x\n", arr);
    printf("%x\n", &arr);
    printf("%x\n", &arr[0]);

    return EXIT_SUCCESS;
}

/*
    alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/LB$ ./a.out
    1dda0ca0
    1dda0ca0
    1dda0ca0
*/
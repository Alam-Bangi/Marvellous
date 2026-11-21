#include<stdio.h>
#include<stdlib.h>

void display(int arr[]){

}

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    printf("%d\n", arr);
    printf("%d\n", &arr);
    printf("%d\n", &arr[0]);

    return EXIT_SUCCESS;
}

/*
    alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/LB$ ./a.out
    -82135952
    -82135952
    -82135952
*/
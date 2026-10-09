#include<stdio.h>
#include<stdlib.h>

int main() {
    int no = 0;

    printf("Enter number : \n");
    scanf("%d", &no);

    if(no %2 == 0) {
        printf("Number is even\n");
    } else {
        printf("Number is odd\n");
    }

    return EXIT_SUCCESS;
}
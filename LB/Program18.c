#include<stdio.h>
#include<stdlib.h>


void checkEven(int no) {
    if(no%2==0) {
        printf("Even Number\n");
    } else {
        printf("Odd Number\n");
    }
}
int main() {
    int no = 0;

    printf("Enter number : ");
    scanf("%d", &no);

    checkEven(no);

    return EXIT_SUCCESS;
}
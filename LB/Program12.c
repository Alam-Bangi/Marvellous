#include<stdio.h>
#include<stdlib.h>

int main() {
    int no = 0;

    printf("Enter no: \n");
    if(scanf("%d", &no) != 1) {         // Cant use scanf in if .
        fprintf(stderr, "Invalid input\n");

        return EXIT_FAILURE;
    }
    printf("Valid input\n");

    return EXIT_SUCCESS;
}


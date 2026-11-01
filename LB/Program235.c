#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    char arr[100];

    printf("Enter string : ");
//    scanf("%[^'\n']s", arr);
    fgets(arr, sizeof(arr), stdin);

    printf("Entered string is : %s\n", arr);

    return EXIT_SUCCESS;
}

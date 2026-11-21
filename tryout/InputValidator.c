#include <stdio.h>

int main() {
    char str[100];
    printf("Enter text: ");

    // %[^\n,] means: read everything until a newline or a comma is hit
    scanf("%[^,\n]", str);

    printf("Result: %s\n", str);
    return 0;
}
/*
Input is valid only until ',' or we press enter

alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/tryout$ ./a.out
Enter text: asdfdfs,sdfsf
Result: asdfdfs
alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/tryout$ ./a.out
Enter text: asdsfe
Result: asdsf
*/
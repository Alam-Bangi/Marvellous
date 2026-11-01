
#include<stdio.h>
#include<stdlib.h>

int main() {
    char ch = '\0';

    for(ch = 'A'; ch <= 'Z'; ch++) {
        printf("%c\n", ch);
    }

    return EXIT_SUCCESS;
}

/*

ASCII VALUE

alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/LB$ ./a.out
A
B
C
D
E
F
G
H
I
J
K
L
M
N
O
P
Q
R
S
T
U
V
W
X
Y
Z
*/
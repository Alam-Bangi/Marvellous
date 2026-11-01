
#include<stdio.h>
#include<stdlib.h>

int main() {
    char ch = '\0';

    for(ch = 'A'; ch <= 'Z'; ch++) {
        printf("%d\t%o\t%x\t%c\n", ch, ch, ch, ch);
    }

    return EXIT_SUCCESS;
}

/*

ASCII VALUE

Dec     Oct     Hex     char

alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/LB$ ./a.out
65      101     41      A
66      102     42      B
67      103     43      C
68      104     44      D
69      105     45      E
70      106     46      F
71      107     47      G
72      110     48      H
73      111     49      I
74      112     4a      J
75      113     4b      K
76      114     4c      L
77      115     4d      M
78      116     4e      N
79      117     4f      O
80      120     50      P
81      121     51      Q
82      122     52      R
83      123     53      S
84      124     54      T
85      125     55      U
86      126     56      V
87      127     57      W
88      130     58      X
89      131     59      Y
90      132     5a      Z
*/
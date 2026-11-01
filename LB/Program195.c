
#include<stdio.h>
#include<stdlib.h>

int main() {
    int iCnt = 0;

    for(iCnt = 97; iCnt <= 122; iCnt++) {
        printf("%d\t%c\n", iCnt, iCnt);
    }

    return EXIT_SUCCESS;
}

/*

ASCII VALUE

alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/LB$ ./a.out
97      a
98      b
99      c
100     d
101     e
102     f
103     g
104     h
105     i
106     j
107     k
108     l
109     m
110     n
111     o
112     p
113     q
114     r
115     s
116     t
117     u
118     v
119     w
120     x
121     y
122     z
*/
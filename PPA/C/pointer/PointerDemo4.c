#include<stdio.h>

int main() {
    char ch = 'A';
    int no = 11;
    float marks = 90.78f;
    double d = 90.56789;

    //Pointers
    char *cp = &ch;
    int *ip = &no;
    float *fp = &marks;
    double *dp = &d;

    printf("%c\n", *cp);
    printf("%d\n", *ip);
    printf("%f\n", *fp);
    printf("%lf\n", *dp);


    return 0;
}

/*
alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/PPA$ gcc PointerDemo4.c -o Myexe -w
alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/PPA$ ./Myexe
A
11
90.779999
90.567890
*/
#include<iostream>
using  namespace std;

class Number {
    public:
        int *arr;
        int iLength;

        Number(int iSize) {
            this -> iLength = iSize;
            this -> arr = new int[iLength];
        }
        ~Number() {
            delete [] this -> arr;
        }
};

int main() {
//    Step 1 : Allocate memory
    Number *number1 = new Number(5);
    Number *number2 = new Number(7);

//    Step 2 : Use memory


//    Step 3 : Deallocate memory
    delete number1;
    delete number2;

    return EXIT_SUCCESS;
}

/*
    alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/LB$ ./a.out
    Enter elements :
    10
    20
    30
    40
    50
    Elements in array are :
    10
    20
    30
    40
    50
*/
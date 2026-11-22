#include<iostream>
using  namespace std;

int main() {
    int *ptr = NULL;
    int iSize = 0;

    cout << "Enter no of elements : \n";
    cin >> iSize;
//    Step 1 : Allocate memory
    ptr = new int[iSize];       // ptr = (int *)malloc(sizeof(int) * iSize);

//    Step 2 : Use the memory

//    Step 3 : Free the memory
    delete [] ptr;     // free(ptr);

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
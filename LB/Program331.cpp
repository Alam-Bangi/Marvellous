#include<iostream>
using  namespace std;

int main() {
    int arr[] = {10, 20 ,30, 40, 50};
    int iCnt = 0;

    cout << "Elements of array are: \n";

    for(iCnt = 0; iCnt < 5; iCnt++) {
        cout << arr[iCnt] << endl;
    }

    return EXIT_SUCCESS;
}

/*
    alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/LB$ ./a.out
    Elements of array are:
    10
    20
    30
    40
    50
*/
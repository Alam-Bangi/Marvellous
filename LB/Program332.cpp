#include<iostream>
using  namespace std;

int main() {
    int arr[5] = {0};
    int iCnt = 0;

    cout << "Enter elements : \n";
    for(iCnt = 0; iCnt < 5; iCnt++) {
        cin >> arr[iCnt];
    }

    cout << "Elements in array are : \n";
    for(iCnt = 0; iCnt < 5; iCnt++) {
        cout << arr[iCnt] << endl;
    }

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
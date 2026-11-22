#include<iostream>
using  namespace std;

int Summation(int arr[], int iLength){
    int iCnt = 0, iSum = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++) {
        iSum += arr[iCnt];
    }
    return iSum;
}

float Average(int arr[], int iLength) {
    float fAvg = 0.0f;
    int iCnt = 0, iSum = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++) {
        iSum += arr[iCnt];
    }
    return (float)iSum/iLength;
}

int main() {
    int *ptr = NULL;
    int iSize = 0, iCnt = 0, iRet = 0;
    float fRet = 0.0f;

    cout << "Enter no of elements : \n";
    cin >> iSize;
//    Step 1 : Allocate memory
    ptr = new int[iSize];       // ptr = (int *)malloc(sizeof(int) * iSize);

//    Step 2 : Use the memory
    cout << "Enter elements : \n";
    for(iCnt = 0; iCnt < iSize; iCnt++) {
        cin >> ptr[iCnt];
    }

    cout << "Elements in array are : \n";
    for(iCnt = 0; iCnt < iSize; iCnt++) {
        cout << ptr[iCnt] << endl;
    }

    iRet = Summation(ptr, iSize);
    cout << "Addition is : " << iRet << endl;

    fRet = Average(ptr, iSize);
    cout << "Average is : " << fRet << endl;

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
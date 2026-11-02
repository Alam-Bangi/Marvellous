#include<iostream>
using  namespace std;

float Addition(float fNo1, float fNo2) {
    float fAns = 0;
    fAns = fNo1 + fNo2;

    return fAns;
}

int main() {
    float fValue1 = 0.0f, fValue2 = 0.0f;
    float fRet = 0.0f;

    cout << "Enter first number : ";
    cin >> fValue1;
    cout << "Enter second number : ";
    cin >> fValue2;

    fRet = Addition(fValue1, fValue2);
    cout << "Addition is : " << fRet << "\n";

    return EXIT_SUCCESS;
}

/*
    alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/LB$ ./a.out
    Enter first number : 12
    Enter second number : 12
    Addition is : 24
*/
#include<iostream>
using  namespace std;

double Addition(double No1, double No2) {
    double Ans;
    Ans = No1 + No2;
    return Ans;
}

int main() {
    double dValue1 = 0.0, dValue2 = 0.0;
    double dRet = 0.0;

    cout << "Enter first number : ";
    cin >> dValue1;
    cout << "Enter second number : ";
    cin >> dValue2;

    dRet = Addition(dValue1, dValue2);
    cout << "Addition is : " << dRet << "\n";

    return EXIT_SUCCESS;
}

/*
    alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/LB$ ./a.out
    Enter first number : 13.678945
    Enter second number : 23.895634
    Addition is : 37.5746
*/
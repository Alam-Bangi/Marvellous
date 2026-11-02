#include<iostream>
using  namespace std;

double Addition(double dNo1, double dNo2) {
    double dAns = 0;
    dAns = dNo1 + dNo2;

    return dAns;
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
    Enter first number : 12
    Enter second number : 12
    Addition is : 24
*/
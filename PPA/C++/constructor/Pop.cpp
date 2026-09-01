#include<iostream>
using namespace std;

int main() {
    int value1 = 0, value2 = 0, result = 0;

    cout << "Enter first number : \n";
    cin >> value1;

    cout << "Enter second number : \n";
    cin >> value2;

    result = value1 + value2;

    cout << "Addition is : " << result << "\n";

    return 0;
}

/*
alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/PPA/C++$ gcc Pop.cpp -o Myexe
alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/PPA/C++$ ./Myexe
Enter first number : 14
Enter second number : 28
Addition is : 42
*/
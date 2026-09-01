#include<iostream>
using namespace std;

int Addition(int no1, int no2) {
    int ans  = 0;
    ans = no1 + no2;
    return ans;
}

int main() {
    int value1 = 0, value2 = 0, result = 0;

    cout << "Enter first number : ";
    cin >> value1;

    cout << "Enter second number : ";
    cin >> value2;

    result = Addition(value1, value2);
    cout << "Addition is : " << result << "\n";

    return 0;
}

/*
alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/PPA/C++$ g++ PopX.cpp -o Myexe
alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/PPA/C++$ ./Myexe
Enter first number : 12
Enter second number : 23
Addition is : 35
*/
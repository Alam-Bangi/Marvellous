#include<iostream>
using  namespace std;

template <class T>              // Making function generic
T Addition(T No1, T No2) {
    T Ans;
    Ans = No1 + No2;
    return Ans;
}

int main() {
    cout << Addition(10, 11) << "\n";
    cout << Addition(10.5f, 11.3f) << "\n";
    cout << Addition(10.5, 11.3) << "\n";

    return EXIT_SUCCESS;
}

/*
    alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/LB$ ./a.out
    21
    21.8
    21.8
*/
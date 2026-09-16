#include<iostream>
using namespace std;

class FunctionCalling {

    void fun(int no) { // Call by value
        no++;
    }

    void gun(int *p) { // Call by address
        (*p)++;
    }

    void sun(int &x) { // Call by reference
        x++;
    }
};
int main() {
    int i = 10, j = 10, k = 10;

    fun(i);
    cout << i << "\n";

    gun(&j);
    cout << j << "\n";

    sun(k);
    cout << k << "\n";

    return 0;
}
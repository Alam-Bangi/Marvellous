#include<iostream>
using namespace std;

class  Demo {
    int i;
    char ch;
    float f;

};

int main() {
    Demo dobj;

    cout << sizeof(dobj);

    return 0;
}
/*
alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/PPA/C++/encapsulation$ g++ Encapsulation1.cpp -o Myexe
alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/PPA/C++/encapsulation$ ./Myexe
12
*/
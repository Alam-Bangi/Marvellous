#include<iostream>
using namespace std;

#pragma pack(1)
class  Demo {
    int i;
    char ch;
    float f;

};

int main() {
    Demo dobj;

    cout << sizeof(dobj) << "\n";

    return 0;
}
/*
alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/PPA/C++/encapsulation$ g++ Encapsulation2.cpp -o Myexe
alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/PPA/C++/encapsulation$ ./Myexe
9
*/

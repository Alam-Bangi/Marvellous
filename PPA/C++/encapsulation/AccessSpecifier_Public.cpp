#include<iostream>
using namespace std;

#pragma pack(1)
class  Demo {
    public:
        int i;
        char ch;
        float f;
};

int main() {
    Demo dobj;
    dobj.i = 11;
    dobj.ch = 'A';
    dobj.f = 3.14;

    cout << dobj.i << "\n";
    cout << dobj.ch << "\n";
    cout << dobj.f << "\n";

    return 0;
}
/*
alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/PPA/C++/encapsulation$ g++ AccessSpecifier_Public.cpp -o Myexe
alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/PPA/C++/encapsulation$ ./Myexe
11
A
3.14
*/

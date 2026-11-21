#include<iostream>
using namespace std;

namespace Marvellous {
    int i = 11;

    void display() {
        cout << "Inside display\n";
    }
}

using namespace Marvellous;
int main() {
    cout << i << "\n";

    display();

    return 0;
}

/*
    alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/PPA/C++/namespace$ ./a.out
    11
    Inside display
*/
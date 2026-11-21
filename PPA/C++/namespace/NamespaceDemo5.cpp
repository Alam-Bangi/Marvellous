#include<iostream>
using namespace std;

namespace Marvellous {
    int i = 11;

    void display() {
        cout << "Inside Marvellous display\n";
    }
}

namespace PPA {
    int i = 21;

    void display() {
        cout << "Inside PPA display\n";
    }
}

int main() {
    Marvellous::display();
    PPA::display();

    return 0;
}

/*
    alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/PPA/C++/namespace$ ./a.out
    Inside Marvellous display
    Inside PPA display
*/
#include<iostream>
using namespace std;

class Demo {
    public:
        int no1;
        int no2;
        static int x;

        Demo(int i, int j) {
            no1 = i;
            no2 = j;
        }

        void fun() {
            cout << "Inside Fun...\n";
            cout << no1 << "\n";
            cout << no2 << "\n";
            cout << x << "\n";
        }
        static void gun() {
            cout << "Inside Gun...\n";
            cout << x << "\n";
        }

};
int Demo::x = 11;
int main() {
    cout << Demo::x << "\n";
    Demo::gun();

    return 0;
}

/*
alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/PPA/C++$ g++ StaticDemo2.cpp -o Myexe
alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/PPA/C++$ ./Myexe
Addition is : 31
Substraction is : 11
*/
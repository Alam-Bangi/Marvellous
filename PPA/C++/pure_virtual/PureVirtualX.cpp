#include<iostream>
using namespace std;

#pragma pack(1)
class Base {
    public:
        int i,j;

        int addition(int no1, int no2) {
            return no1 + no2;
        }
        virtual int Substraction(int no1, int no2) = 0;
};

#pragma pack(1)
class Derived : public Base {
    public:
        int x;

        int Substraction(int no1 , int no2) {
            return no1 - no2;
        }

        int Multiplication(int no1 , int no2) {
            return no1 * no2;
        }
};

int main() {
    Derived dobj;
    int ret = 0;

    cout << "sizeof Base :"<< sizeof(Base) << "\n";
    cout << "sizeof Derived :"<< sizeof(Derived) << "\n";

    ret = dobj.addition(11,10);
    cout << "addition is " << ret << "\n";

    ret = dobj.Substraction(14,2);
    cout << "Substraction is " << ret << "\n";

    ret = dobj.Multiplication(2,4);
    cout << "Multiplication is " << ret << "\n";

    return 0;
}

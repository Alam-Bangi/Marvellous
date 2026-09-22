#include<iostream>
using namespace std;

#pragma pack(1)
class Base {
    public:
        int i,j;
        virtual void fun() {
            cout << "Inside fun of Base\n";
        }
};

#pragma pack(1)
class Derived : public Base {
    public:
        int i;
        void fun() {
            cout << "Inside fun of Derived\n";
        }
};
int main() {
// Virtual has reserved first 8 bytes
    cout << sizeof(Base) << "\n";       // 16  -> 16
    cout << sizeof(Derived) << "\n";    // 24  -> 20

    Base *bp = new Derived();           // Upcasting
    bo -> fun();                        // Derived fun

    return 0;
}
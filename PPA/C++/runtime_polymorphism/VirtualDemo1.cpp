#include<iostream>
using namespace std;

class Base {
    public:
        int i,j;
};
class Derived : public Base {
    public:
        int i;
};
int main() {
    Base *bp1 = new Base();         // No Casting
    Base *bp2 = new Derived();      // Up-casting

    Derived *dp1 = new Derived();   // No Casting
//    Derived *dp2 = new Base();      // Down-casting

    return 0;
}

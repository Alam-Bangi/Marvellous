#include<iostream>
using namespace std;

class Arithmatic {
    public:
        int x,y;

        Arithmatic() {
            this -> x = 0;
            this -> y = 0;
        }

        Arithmatic(int i, int j) {
            this -> x = i;
            this -> y = j;
        }

        Arithmatic(Arithmatic &ref) {
            this -> x = ref.x;
            this -> y = ref.y;
        }
};

int main() {
    Arithmatic aobj1;
    Arithmatic aobj2(10,11);
    Arithmatic aobj3(aobj2);

    return 0;
}

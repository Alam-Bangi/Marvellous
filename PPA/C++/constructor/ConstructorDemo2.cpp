#include<iostream>
using namespace std;

class PPA {
    public:
        int no1;
        int no2;

//    Default constructor
    PPA() {
        cout << "Inside Default Constructor\n";
    }

//    Parameterized constructor
    PPA(int a, int b) {
        cout << "Inside Parameterized Constructor\n";
    }

//    Destructor
    ~PPA() {
       cout << "Inside Destructor\n";
   }
};
int main() {
    PPA pobj1;
    PPA pobj2(11, 21);

    return 0;
}

/*
Output -
Inside Default Constructor
Inside Parameterized Constructor
Inside Destructor
Inside Destructor
*/
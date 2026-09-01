#include<iostream>
using namespace std;

class PPA {
    public:
        int no1;
        int no2;

//    Default constructor
    PPA() {
        cout << no1 << " " << no2;
        cout << "\nInside Default Constructor\n";
    }

//    Parameterized constructor
    PPA(int a, int b) {
        no1 = a;
        no2 = b;
        cout << no1 << " " << no2;
        cout << "\nInside Parameterized Constructor\n";
    }

//    Copy constructor
    PPA(PPA &obj) {
        cout << "Inside Copy Constructor\n";
    }

//    Destructor
    ~PPA() {
       cout << "Inside Destructor\n";
   }
};
int main() {
    PPA pobj1;              //Default
    PPA pobj2(11, 21);      //Parameterized
    PPA pobj3(pobj1);       // Copy

    return 0;
}

/*
Output -
Inside Default Constructor
Inside Parameterized Constructor
Inside Copy Constructor
Inside Destructor
Inside Destructor
Inside Destructor
*/
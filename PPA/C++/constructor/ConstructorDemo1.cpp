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

//    Destructor
    ~PPA() {
       cout << "Inside Destructor\n";
   }
};
int main() {
    PPA pobj1;
    PPA pobj2;

    return 0;
}

/*
Output -
Inside Default Constructor
Inside Default Constructor
Inside Destructor
Inside Destructor
*/
#include<iostream>
using  namespace std;

class Arithmatic {
    public :
        double no1;
        double no2;

        Arithmatic(double a, double b){
            no1 = a;
            no2 = b;
        }

        double Addition() {
            double ans;
            ans = no1 + no2;
            return ans;
        }

        double Substraction() {
            double ans;
            ans = no2 - no1;
            return ans;
        }
};

int main() {
    Arithmatic *arithmatic1 = new Arithmatic(11, 10);           //  Error

    cout << arithmatic1 -> Addition() << endl;

    return EXIT_SUCCESS;
}

/*
    Program283.cpp: In function ‘int main()’:
    Program283.cpp:29:5: error: missing template argument list after ‘Arithmatic’; for deduction, template placeholder must be followed by a simple declarator-id
       29 |     Arithmatic *arithmatic1 = NULL:
          |     ^~~~~~~~~~
          |               <>
    Program283.cpp:5:7: note: ‘template<class T> class Arithmatic’ declared here
        5 | class Arithmatic {
          |       ^~~~~~~~~~
    Program283.cpp:32:13: error: ‘arithmatic1’ was not declared in this scope; did you mean ‘Arithmatic’?
       32 |     cout << arithmatic1 -> Addition() << endl;
          |             ^~~~~~~~~~~
          |             Arithmatic
*/
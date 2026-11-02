#include<iostream>
using  namespace std;

template <class T>
class Arithmatic {
    public :
        T no1;
        T no2;

        Arithmatic(T a, T b){
            no1 = a;
            no2 = b;
        }

        T Addition() {
            T ans;
            ans = no1 + no2;
            return ans;
        }

        T Substraction() {
            T ans;
            ans = no2 - no1;
            return ans;
        }
};

int main() {
    Arithmatic *arithmatic1 = NULL:             //Error
    arithmatic1 = new Arithmatic(11, 10);

    cout << arithmatic1 -> Addition() << endl;

    return EXIT_SUCCESS;
}

/*
    alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/LB$ ./a.out
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
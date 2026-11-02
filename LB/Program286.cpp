#include<iostream>
using  namespace std;

template <class T>
class Arithmatic {
    public :
        T no1;
        T no2;

        Arithmatic(T a, T b);
        T Addition();
        T Substraction();
};

template <class T>
Arithmatic :: Arithmatic(T a, T b){         //Error
    no1 = a;
    no2 = b;
}

template <class T>
T Arithmatic :: Addition() {                //Error
    T ans;
    ans = no1 + no2;
    return ans;
}

template <class T>
T Arithmatic :: Substraction() {            //Error
    T ans;
    ans = no2 - no1;
    return ans;
}

int main() {
    Arithmatic <int> *arithmatic1 = new Arithmatic <int> (11, 10);

    cout << arithmatic1 -> Addition() << endl;

    return EXIT_SUCCESS;
}

/*
    alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/LB$ g++ Program286.cpp
    Program286.cpp:16:1: error: deduced class type ‘Arithmatic’ in function return type
       16 | Arithmatic :: Arithmatic(T a, T b){         //Error
          | ^~~~~~~~~~
    Program286.cpp:5:7: note: ‘template<class T> class Arithmatic’ declared here
        5 | class Arithmatic {
          |       ^~~~~~~~~~
    Program286.cpp:22:3: error: ‘template<class T> class Arithmatic’ used without template arguments
       22 | T Arithmatic :: Addition() {                //Error
          |   ^~~~~~~~~~
    Program286.cpp: In function ‘T Addition()’:
    Program286.cpp:24:11: error: ‘no1’ was not declared in this scope [-Wtemplate-body]
       24 |     ans = no1 + no2;
          |           ^~~
    Program286.cpp:24:17: error: ‘no2’ was not declared in this scope [-Wtemplate-body]
       24 |     ans = no1 + no2;
          |                 ^~~
    Program286.cpp: At global scope:
    Program286.cpp:29:3: error: ‘template<class T> class Arithmatic’ used without template arguments
       29 | T Arithmatic :: Substraction() {            //Error
          |   ^~~~~~~~~~
    Program286.cpp: In function ‘T Substraction()’:
    Program286.cpp:31:11: error: ‘no2’ was not declared in this scope [-Wtemplate-body]
       31 |     ans = no2 - no1;
          |           ^~~
    Program286.cpp:31:17: error: ‘no1’ was not declared in this scope [-Wtemplate-body]
       31 |     ans = no2 - no1;
          |                 ^~~
*/
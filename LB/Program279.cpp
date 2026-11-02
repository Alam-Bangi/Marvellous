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
    Arithmatic arithmatic1(10.5, 11.6);         // Compiler predict entered value is double so no Error

    cout << arithmatic1.Addition() << "\n";
    cout << arithmatic1.Substraction() << "\n";

    return EXIT_SUCCESS;
}

/*
    alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/LB$ ./a.out
    22.1
    1.1
*/
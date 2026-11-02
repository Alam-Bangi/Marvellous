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
//    Arithmatic arithmatic1(10.5, 12.9);
//    Arithmatic arithmatic2(20.6, 22.0);
//
//    cout << arithmatic1.Addition() << "\n";
//    cout << arithmatic2.Addition() << "\n";
//
//    cout << arithmatic1.Substraction() << "\n";
//    cout << arithmatic2.Substraction() << "\n";

    return EXIT_SUCCESS;
}

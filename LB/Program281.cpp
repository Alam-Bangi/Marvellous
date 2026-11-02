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
    Arithmatic <int> arithmatic1(10, 11);
    Arithmatic <float> arithmatic2(10.5f, 11.6f);

    cout << arithmatic1.Addition() << "\n";
    cout << arithmatic2.Addition() << "\n";

    return EXIT_SUCCESS;
}

/*
    alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/LB$ ./a.out
    21
    22.1
*/
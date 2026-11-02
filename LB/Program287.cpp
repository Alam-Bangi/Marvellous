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
Arithmatic<T> :: Arithmatic(T a, T b){      //  Telling generic class what type
    no1 = a;
    no2 = b;
}

template <class T>
T Arithmatic<T> :: Addition() {
    T ans;
    ans = no1 + no2;
    return ans;
}

template <class T>
T Arithmatic<T> :: Substraction() {
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
    alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/LB$ ./a.out
    21
*/
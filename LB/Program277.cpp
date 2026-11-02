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
    Arithmatic arithmatic1(10.5, 12.9);
    Arithmatic arithmatic2(20.6, 22.0);

    cout << arithmatic1.Addition() << "\n";
    cout << arithmatic2.Addition() << "\n";

    cout << arithmatic1.Substraction() << "\n";
    cout << arithmatic2.Substraction() << "\n";

    return EXIT_SUCCESS;
}

/*
    alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/LB$ ./a.out
    23.4
    42.6
    2.4
    1.4
*/
#include<iostream>
using  namespace std;

class Arithmatic {
    public :
        float no1;
        float no2;

        Arithmatic(float a, float b){
            no1 = a;
            no2 = b;
        }

        float Addition() {
            float ans;
            ans = no1 + no2;
            return ans;
        }
};

int main() {
    Arithmatic arithmatic1(10.5f, 12.9f);
    Arithmatic arithmatic2(20.6f, 22.0f);

    cout << arithmatic1.Addition() << "\n";
    cout << arithmatic2.Addition() << "\n";

    return EXIT_SUCCESS;
}

/*
    alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/LB$ ./a.out
    23.4
    42.6
*/
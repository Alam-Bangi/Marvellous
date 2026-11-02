#include<iostream>
using  namespace std;

class Arithmatic {
    public :
        int no1;
        int no2;

        Arithmatic(int a, int b){
            no1 = a;
            no2 = b;
        }

        int Addition() {
            int ans;
            ans = no1 + no2;
            return ans;
        }
};

int main() {
    Arithmatic arithmatic(10, 12);
    cout << arithmatic.Addition() << "\n";

    return EXIT_SUCCESS;
}

/*
    alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/LB$ ./a.out
    22
*/
#include<iostream>
using namespace std;

class Arithmatic {
    public:
        int no1;
        int no2;

        Arithmatic() {
            this->no1 = 0;
            this->no2 = 0;
        }

        Arithmatic(int i, int j) {
            this->no1 = i;
            this->no2 = j;
        }
//        int Addition(Arithmatic *this)
        int Addition() {
            int ans  = 0;
            ans = this->no1 + this->no2;
            return ans;
        }
//        int Substraction(Arithmatic *this)
        int Substraction() {
            int ans  = 0;
            ans = this->no1 - this->no2;
            return ans;
        }
};

int main() {
    Arithmatic aobj1(21,10);

    int result = 0;
//    result = Addition(&aobj1);
    result = aobj1.Addition();
    cout << "Addition is: " << result << "\n";

//    result = Substraction(&aobj1);
    result = aobj1.Substraction();
    cout << "Substraction is: " << result << "\n";
    return 0;
}

/*
alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/PPA/C++$ g++ OopXX.cpp -o Myexe
alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/PPA/C++$ ./Myexe
Addition is : 31
Substraction is : 11
*/
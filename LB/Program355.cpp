#include<iostream>
using  namespace std;

class Number {
    private:
        int *arr;
        int iLength;

    public:
        Number(int iSize) {
            cout << "Constructor\n";
            this -> iLength = iSize;
            this -> arr = new int[iLength];
        }
        ~Number() {
            cout << "Destructor\n";
            delete [] this -> arr;
        }

        void Accept() {
            int iCnt = 0;

            cout << "Enter elements : \n";
            for(iCnt = 0; iCnt < iLength; iCnt++) {
                cin >> arr[iCnt];
            }
        }

        void Display() {
            int iCnt = 0;

            cout << "Elements are : \n";
            for(iCnt = 0; iCnt < iLength; iCnt++) {
                cout << arr[iCnt] << endl;
            }
        }

        int Summation(){
            int iCnt = 0, iSum = 0;
            for(iCnt = 0; iCnt < iLength; iCnt++) {
                iSum += arr[iCnt];
            }
            return iSum;
        }

        float Average() {
            float fAvg = 0.0f;
            int iCnt = 0, iSum = 0;
            for(iCnt = 0; iCnt < iLength; iCnt++) {
                iSum += arr[iCnt];
            }
            return (float)iSum/(float)iLength;
        }
};

int main() {
    Number number1(5);
    Number number2(7);

    number1.Accept();
    cout << "Addition is : " << number1.Summation() << endl;

    number2.Accept();
    cout << "Addition is : " << number2.Summation() << endl;

    return EXIT_SUCCESS;
}

/*
    alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/LB$ ./a.out
    Constructor
    Constructor
    Enter elements :
    10
    20
    30
    40
    50
    Addition is : 150
    Enter elements :
    90
    80
    70
    60
    60
    40
    40
    Addition is : 440
    Destructor
    Destructor
*/
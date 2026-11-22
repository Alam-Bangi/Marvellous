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
    int iSize = 0, iRet = 0;
    float fRet = 0.0f;

    cout << "Enter number of elements : ";
    cin >> iSize;
//    Step 1 : Allocate memory
    Number *number1 = new Number(iSize);

//    Step 2 : Use memory
    number1 -> Accept();
    number1 -> Display();

    iRet = number1 -> Summation();
    cout << "Addition is : " << iRet << endl;

    fRet = number1 -> Average();
    cout << "Average is : " << fRet << endl;

//    Step 3 : Deallocate memory
    delete number1;

    return EXIT_SUCCESS;
}

/*
    alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/LB$ ./a.out
    Enter number of elements : 3
    Constructor
    Enter elements :
    12
    23
    36
    Elements are :
    12
    23
    36
    Addition is : 71
    Average is : 23.6667
    Destructor
*/
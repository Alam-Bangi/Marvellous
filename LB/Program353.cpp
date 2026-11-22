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
};

int main() {
    int iSize = 0;

    cout << "Enter number of elements : ";
    cin >> iSize;
//    Step 1 : Allocate memory
    Number *number1 = new Number(iSize);

//    Step 2 : Use memory
    number1 -> Accept();
    number1 -> Display();

//    Step 3 : Deallocate memory
    delete number1;

    return EXIT_SUCCESS;
}

/*
    alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/LB$ ./a.out
    Enter number of elements : 2
    Constructor
    Enter elements :
    12
    Segmentation fault         ./a.out
*/
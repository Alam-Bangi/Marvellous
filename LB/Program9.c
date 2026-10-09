#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function name: Addition
// Input:         Integer , Integer
// Output:        Integer
// Description:   Performs Addition
// Date:          09/10/2026
// Author:        Md.Alam Md.Kasim Bangi
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Addition(
                int no1,    // First input
                int no2     // Second input
            )
{
    int iAns = 0;
    iAns = no1 + no2;                    // Business Logic
    return iAns;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Entry point of application
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main() {
    int iValue1 = 0, iValue2 = 0, iResult = 0;

    printf("Enter first number: \n");
    scanf("%d", &iValue1);
    printf("Enter second number: \n");
    scanf("%d", &iValue2);

    iResult = Addition(iValue1, iValue2);
    printf("Addition is: %d\n", iResult);

    return EXIT_FAILURE;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Step 5: Test the program
//         Tested test cases.
//         Input1          Input2         Output
//          11              11              21
//          11              0               11
//          0               11              11
//          20              -9              11
//          -9              20              11
//          -20             -11             -31
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

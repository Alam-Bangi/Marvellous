#include <iostream>
#include <string>

int main() {
    std::string str;
    std::cout << "Enter text: ";

    // Reads input up to the first ';' and stores it in str
    std::getline(std::cin, str, ';');

    std::cout << "Result: " << str << std::endl;
    return 0;
}
/*

Input is valid until ';' is not added

alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/tryout$ ./a.out
Enter text: asdsad
ascsa
;
Result: asdsad
ascsa

alam@LAPTOP-V9FN0GP1:~/Github/Marvellous/tryout$ ./a.out
Enter text: asd;
Result: asd
*/
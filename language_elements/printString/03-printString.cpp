#include <iostream>
#include <string>
// Write your function here

void printString (const std::string& str, std::size_t count)
{
    for (std::size_t i = 0; i < count; i++) {
        std::cout << str << "\n";
    }
}

int main()
{
    printString ("Hello", 5);
    std::cout << "\n";

    printString ("AbC", 2);
    std::cout << "\n";

    printString ("HiHi ", 6);
    std::cout << "\n";

    return 0;
}

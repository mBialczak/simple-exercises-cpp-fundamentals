// Very simple multiplying function exercise

#include <iostream>

int multiply (int lhs, int rhs)
{
    return lhs * rhs;
}

int main()
{
    std::cout << "4 * 5: " << multiply (4, 5) << "\n";
    std::cout << "10 * 5: " << multiply (10, 5) << "\n";
    std::cout << "-5 * 5: " << multiply (-5, 5) << "\n";

    return 0;
}

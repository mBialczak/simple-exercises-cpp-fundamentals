#include <iostream>
#include <vector>

// Implement concatenateVector.
// It should take 2 vectors and return one which has alternately elements from the first and the other one.

std::vector<int> concatenateVector (const std::vector<int>& first,
                                    const std::vector<int>& second)
{
    std::vector<int> mixed;
    mixed.reserve (first.size() * 2);

    for (std::size_t i = 0; i < first.size(); ++i) {
        mixed.emplace_back (first[i]);
        mixed.emplace_back (second[i]);
    }

    return mixed;
}

int main()
{
    std::vector<int> vec1 { 1, 2, 3, 4, 5 };
    std::vector<int> vec2 { 11, 12, 13, 14, 15 };

    auto vec = concatenateVector (vec1, vec2);
    for (const auto& el : vec) {
        std::cout << el << " ";
    }
    return 0;
}

#include <iostream>
#include <list>
#include <map>
#include <string>
#include <vector>

std::map<int, std::string> createMap (const std::vector<int>& keys,
                                      const std::list<std::string>& values)
{
    std::map<int, std::string> dict;
    size_t size = keys.size() < values.size() ? keys.size() : values.size();
    auto iter = values.begin();

    for (size_t i = 0; i < size; ++i) {
        dict[keys[i]] = *iter;
        ++iter;
    }

    return dict;
}

int main()
{
    std::vector<int> vec { 1, 2, 3, 4, 5, 6 };
    std::list<std::string> list { "One", "Two", "Three", "Four", "Five" };
    auto map = createMap (vec, list);

    for (const auto& pair : map)
        std::cout << pair.first << " | " << pair.second << '\n';

    return 0;
}


#include <utility>
#include <functional>
#include <iostream>

int main()
{
    int i = 0;
    int j = 0;
    auto p = std::make_pair(std::ref(i), std::ref(j));
    ++p.first;
    ++p.second;

    std::cout << "i:" << i << " " << "j:" << j << std::endl;
}


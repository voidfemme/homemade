#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
// std::sort is built into c++

int main()
{
    std::vector<int> values = {3, 5, 1, 4, 2};
    std::sort(values.begin(), values.end(), [](int a, int b)
    {
        if (a == 1)
            return false;
        if (b == 1)
            return true;
        return a < b;
    });

    for (int value : values)
        std::cout << value << std::endl;
    // learn more about cin.get
    std::cin.get();
}

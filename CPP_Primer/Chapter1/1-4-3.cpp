#include <iostream>

int main()
{
    std::cout << "Please input multiple integer values: " << std::endl;
    int sum = 0, value = 0;
    while (std::cin >> value) {
        sum += value;
    }
    std::cout << "The sum is " << sum << std::endl;
    return 0;
}
#include <iostream>

int main()
{
    std::cout << "What is your number\n";
    int x{};
    std::cin >> x;
    std::cout << "What is your second number?\n";
    int y{};
    std::cin >> y;
    std::cout << "The sum is " << x + y << "\n";

    return 0;
}
#include <iostream>

int getValueFromUser()
{
    std::cout << "Enter an integer:\n";
    int input{};
    std::cin >> input;

    return input;
}

int main()
{
    int x {getValueFromUser()};
    int y {getValueFromUser()};

    std::cout << "The sum is " << x + y << ".\n";

    return 0;
}
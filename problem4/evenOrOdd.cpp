#include <iostream>
#include <string>

std::string even_or_odd(int number);

int main()
{
    std ::cout << even_or_odd(4) << std ::endl;
}

std::string even_or_odd(int number)
{
    return (number % 2) ? "Odd" : "Even";
}
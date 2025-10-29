/*Complete the solution so that it reverses the string passed into it.*/
#include <iostream>
#include <string>

std::string reverseString(const std::string &str);

int main()
{
    std ::cout << reverseString("Abeer") << std ::endl;
}
/*
std::string reverseString(const std::string &str)
{
    std ::string st;
    int i = 0;
    while (i != str.length())
    {
        st += str[str.length() - i - 1];
        i++;
    }
    return st;
}
*/
std::string reverseString(const std::string &str)
{
    return std::string(str.rbegin(), str.rend());
}
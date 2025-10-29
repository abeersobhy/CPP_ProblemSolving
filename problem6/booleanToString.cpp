/*Implement a function which convert the given boolean value into its string representation. */
#include <iostream>
#include <string>

std::string boolean_to_string(bool b);

int main()
{
    std ::cout << boolean_to_string(false) << std ::endl;
}
std::string boolean_to_string(bool b)
{
    return b ? "true" : "false";
}

#include <iostream>
bool isDivisible(int n, int x, int y);

int main()
{
    std ::cout << isDivisible(9, 3, 1) << std ::endl;
}
bool isDivisible(int n, int x, int y)
{
    return ((n % x == 0) && (n % y == 0));
}
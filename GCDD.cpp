// GCD(Greatest Common Divisor) using Recursion.
#include <iostream>
using namespace std;
int gcdRec(int a, int b)
{
    if (b == 0)
        return a;
    return gcdRec(b, a % b);
}
int main()
{
    cout << gcdRec(0, 24) << endl;
    return 0;
}
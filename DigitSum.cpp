// Sum the number of digits in a number.
#include <iostream>
#include <math.h>
using namespace std;
void printDigits(int n)
{
    int sum = 0;
    while (n != 0)
    {
        int digit = n % 10;
        sum += digit;
        n = n / 10;
    }
    cout << sum << endl;
}
int main()
{
    int n = 3568;
    cout << (int)(log10(n) + 1) << endl;
    return 0;
}
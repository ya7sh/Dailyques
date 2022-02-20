#include <iostream>
using namespace std;
int main()
{
    int n, num, rev, d;
    rev = 0;
    cout << "Enter a number ";
    cin >> n;
    num = n;
    while (n != 0)
    {
        d = n % 10;
        rev = rev * 10 + d;
        n = n / 10;
    }
    if (rev == num)
        cout << "Palindrome number";
    else
        cout << "Not Palindrome";
}
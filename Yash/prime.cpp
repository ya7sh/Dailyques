#include <iostream>
using namespace std;
int main()
{
    int n, c, i;
    c = 0;
    cout << "Enter a number: ";
    cin >> n;
    for (i = 1; i < n / 2; i++)
    {
        if (n % i == 0)
            c++;
    }
    if (c == 1)
        cout << "Prime number ";
    else
        cout << "Not a prime number ";
}
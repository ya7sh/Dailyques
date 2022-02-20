#include <iostream>
using namespace std;
int main()
{
    int n, num, d, sum;
    sum = 0;
    cout << "Enter a 3 digit number " << endl;
    cin >> n;
    num = n;
    while (n > 0)
    {
        d = n % 10;
        sum = sum + (d * d * d);
        n = n / 10;
    }
    if (sum == num)
        cout << "Armstrong number ";
    else
        cout << "Not Armstrong";
}
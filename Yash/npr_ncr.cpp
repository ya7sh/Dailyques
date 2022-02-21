#include <iostream>
using namespace std;
int fact(int n)
{
    int f = 1;
    if (n == 1 || n == 0)
        return 1;
    else if (n > 1)
    {
        f = n * fact(n - 1);
        return f;
    }
    else
        return 0;
}
int main()
{
    int num, r, p, c;
    cout << "Enter n and r \n";
    cin >> num >> r;
    p = fact(num) / fact(num - r);
    c = fact(num) / (fact(num - r) * fact(r));
    cout << "Permutation value is " << p << endl;
    cout << "Combination value is " << c;
    return 0;
}
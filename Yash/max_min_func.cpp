#include <iostream>
using namespace std;
int max(int x, int y, int z)
{
    if (x > y)
    {
        if (x > z)
            return x;
        else
            return z;
    }
    else
    {
        if (y > z)
            return y;
        else
            return z;
    }
}
int min(int x, int y, int z)
{
    if (x < y)
    {
        if (x < z)
            return x;
        else
            return z;
    }
    else
    {
        if (y < z)
            return y;
        else
            return z;
    }
}
int main()
{
    int a, b, c;
    cout << "Enter three numbers" << endl;
    cin >> a >> b >> c;
    cout << "Largest number among them is " << max(a, b, c) << endl;
    cout << "Mininmum number among them is " << min(a, b, c);
}
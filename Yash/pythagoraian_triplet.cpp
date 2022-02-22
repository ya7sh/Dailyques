#include <iostream>
using namespace std;
bool istriplet(int a, int b, int c)
{
    int x, y, z;
    x = a * a;
    y = b * b;
    z = c * c;
    if (x == (y + z) || y == (x + z) || z == (x + y))
        return true;
    else
        return false;
}
int main()
{
    int a, b, c;
    cout << "Enter the three numbers\n";
    cin >> a >> b >> c;
    if (istriplet(a, b, c))
        cout << "They form a Pythagoraian triplet";
    else
        cout << "They don't form a Pythagoraian triplet";
}
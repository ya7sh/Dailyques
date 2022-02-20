#include <iostream>
using namespace std;
int gcd(int x, int y)
{
    if (x == 0)
        return y;
    if (y == 0)
        return x;
    if (x == y)
        return x;
    if (x > y)
        return gcd(x - y, y);
    if (y > x)
        return gcd(x, y - x);
    else
        return 0;
}
int main(){
    int a, b,hcf;
    cout<<"Enter two numbers ";
    cin>>a>>b;
    cout<<gcd(a,b);
    return 0;

}
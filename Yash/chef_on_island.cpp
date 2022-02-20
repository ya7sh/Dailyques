#include <iostream>
using namespace std;

int main() {
	int x,y,r1,r2,D,T,i,f,w,m;
	cin >> T;
	for(i=1;i<=T;i++)
	{
	    cin >>x;
	    cin >>y;
	    cin >>r1;
	    cin >>r2;
	    cin >>D;
	    
	    f=x/r1;
	    w=y/r2;
	    m= std::min(f,w);
	    if(m>=D)
	    cout <<"YES \n";
	    else
	    cout <<"NO\n";
	    
	}
	return 0;
}
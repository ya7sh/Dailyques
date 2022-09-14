#include <iostream>
using namespace std;

int main() {
	int t, r1,r2,r3,r4,x;
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>r1>>r2>>r3>>r4;
	    x=r1+r2+r3+r4;
	    if(x==0)
	    cout<<"IN"<<endl;
	    else
	    cout<<"OUT"<<endl;
	    
	}
	return 0;
}


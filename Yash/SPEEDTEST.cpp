#include <iostream>
using namespace std;

int main() {
	double t,a ,x ,b,y;
	double A,B;
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>a;
	    cin>>x;
	    cin>>b;
	    cin>>y;
	    A=a/x;
	    B=b/y;
	    if(A>B)
	    cout<<"Alice"<<endl;
	    else if(B>A)
	    cout<<"Bob"<<endl;
	    else if(A==B)
	    cout<<"Equal"<<endl;
	    
	}
	return 0;
}


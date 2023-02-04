#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,z ,quotient,reamminder;
	    cin>>x>>y>>z;
	     quotient=(x/y) ;
	      reamminder=(x%y) ;
	    if(reamminder==0)
	    cout<<z*quotient<<endl;
	    else if(x<y)
	    cout<<z<<endl;
	    else if( reamminder != 0)
	    cout<<(reamminder + 1) * z<<endl;
	    else
	    cout<<"not requider"<<endl;
	}
	return 0;
}

#include <iostream>
using namespace std;

int main() {
	int t,A,B,C;
	cin>>t;
	while(t--){
	    cin>>A>>B>>C;
	    if(A+B+C==180){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
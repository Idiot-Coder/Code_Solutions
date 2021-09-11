#include <iostream>
using namespace std;

int rev(int a){
     int r=0;
     while(a!=0){
         r=r*10+(a%10);
         a=a/10;
     }
     return r;
}
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        cout<<rev(n)<<endl;
    }
}
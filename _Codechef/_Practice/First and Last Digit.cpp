#include<iostream>
using namespace std;
int main(){
    int N,sum=0,f,l,t;
    cin>>t;
    while(t--){
        cin>>N;
        l=N%10;
        f=N;
        while(N>=10){
            N/=10;
        }
        f=N;
        sum=f+l;
        cout<<sum<<endl;
    }
    return 0;
}
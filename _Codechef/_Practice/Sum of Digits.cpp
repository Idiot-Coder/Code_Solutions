#include<iostream>
using namespace std;
int sod(int a){
    int sum=0;
    while(a!=0){
        sum=sum+(a%10);
        a=a/10;
    }
    return sum;
}
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        cout<<sod(n)<<endl;
    }
}
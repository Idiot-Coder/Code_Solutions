#include<iostream>
using namespace std;
int main(){
    int t,a,b,c,matchArr[]={6,2,5,5,4,5,6,3,7,6},ld,nom=0;
    cin>>t;
    while(t--){
        cin>>a>>b;
        c=a+b;
        while(c!=0){
            ld=c%10;
            nom+=matchArr[ld];
            c=c/10;
        }
        cout<<nom<<endl;
        nom=0;
    }
    return 0;
}
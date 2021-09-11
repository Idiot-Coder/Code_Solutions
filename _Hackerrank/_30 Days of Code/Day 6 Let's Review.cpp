#include <cmath>
#include <cstring>
#include <iostream>
using namespace std;

void oddeven(char s[]){
    for(int i=0;i<strlen(s);i++){
        if(i%2==0){
            cout<<s[i];
        }
    }
    cout<<" ";
    for(int i=0;i<strlen(s);i++){
        if(i%2!=0){
            cout<<s[i];
        }
    }
    cout<<"\n";
}

int main() {
    int t,i;
    char s[10000];
    cin>>t;
    for(i=0;i<t;i++){
        cin>>s;
        oddeven(s);
    }
    return 0;
}


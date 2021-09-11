#include<iostream>
using namespace std;

int main(){
    int i,j,k,hs=0,max=-64;
    int arr[6][6];
    
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            cin>>arr[i][j];
        }
    }
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            hs=arr[i+1][j+1];
            for(k=0;k<3;k++){
                hs=hs+arr[i][j+k]+arr[i+2][j+k];
            }
            if(hs>max){
                max=hs;
            }
        }
    }
    cout<<max;
    
    return 0;
}

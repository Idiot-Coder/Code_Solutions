#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        char Class_ID;
        cin>>Class_ID;
        if(Class_ID=='B'||Class_ID=='b'){
            cout<<"BattleShip"<<endl;
        }
        if(Class_ID=='C'||Class_ID=='c'){
            cout<<"Cruiser"<<endl;
        }
        if(Class_ID=='D'||Class_ID=='d'){
            cout<<"Destroyer"<<endl;
        }
        if(Class_ID=='F'||Class_ID=='f'){
            cout<<"Frigate"<<endl;
        }
    }
    return 0;
}
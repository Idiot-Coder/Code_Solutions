#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double mealcost,tip,tax;
    int tip_percent,tax_percent,total_cost;
    
    cin>>mealcost;
    cin>>tip_percent;
    cin>>tax_percent;
    
    tip=mealcost*(double)tip_percent/100;
    tax=mealcost*(double)tax_percent/100;
    total_cost=(int) round(mealcost+tip+tax);
    cout<<total_cost;
    return 0;
}

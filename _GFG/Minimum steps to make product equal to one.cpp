#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int makeProductOne(int arr[], int N) {
        // code here
        int positive=0,negative=0,zero=0;
        int step=0;
        for(int i=0;i<N;i++){
            if(arr[i]==0){
                zero++;
            }
            else if(arr[i]<0){
                negative++;
                step=step+(-1-arr[i]);
            }
            else{
                positive++;
                step=step+(arr[i]-1);
            }
        }
        if(negative%2==0){
            step=step+zero;
        }
        else{
            if(zero>0){
                step=step+zero;
            }
            else{
                step=step+2;
            }
        }
        return step;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];

        Solution ob;
        cout << ob.makeProductOne(arr,N) << endl;
    }
    return 0;
}  // } Driver Code Ends
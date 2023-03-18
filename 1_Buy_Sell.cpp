#include<bits/stdc++.h>
using namespace std;
int buysell(vector<int>arr){
    int buy,profit=0;
    buy=INT_MAX;
    for(int i=0;i<arr.size();i++){
        if(buy<arr[i]){
            profit=max(profit,arr[i]-buy);
        }
        else{
            buy=arr[i];
        }
    }
    return profit;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<buysell(arr);
}

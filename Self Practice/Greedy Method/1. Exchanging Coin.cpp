#include<bits/stdc++.h>
using namespace std;
int exchange_coin(vector<int>&v,int coin){
    int count = 0;
    int sum =0;
    int ans =0;
    int n = v.size();
    sort(v.begin(),v.end());
    for(int i=n-1;i>=0;i--){
       if(coin>=v[i]){
        count = coin/v[i];//36/20 = 1 //16/10 = 1 = 6 6/4 = 1 2/2 = 1
        sum = count*v[i]; // 1*20 = 20 + 1*10 = 30 30 + 1*4 = 34 34+1*2 = 36
        coin -= sum;//36 - 20 = 16 , 36-34 = 2, 36-36
        ans+=count; //1+1+1+1
       }else if(coin==0){
        break;
       }
    }
    return ans;
}
int main()
{
    int coin;//main tk
    cin>>coin;
    int n; // size of given coins
    cin>>n;
    vector<int>v(n); // the given coins //10,20,4,2,1
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int coins = exchange_coin(v,coin);
    cout<<"coin needed: "<<coins<<endl;
    return 0;
}
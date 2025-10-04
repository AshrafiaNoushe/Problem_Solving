#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,index;
        bool check = false;
        cin>>n;
        map<int,int>mp;
        for(int i=1;i<=n;i++)
        {
            int digit;
            cin>>digit;
            mp[digit]++;
            if( !check && mp[0]>=3 && mp[1]>=1 && mp[2]>=2 && mp[3]>=1 &&mp[5]>=1){
                index =i;
                check = true;
            }

        }
        if(check){
            cout<<index<<endl;
        }else{
            cout<<"0"<<endl;
        }
    }
    return 0;
}
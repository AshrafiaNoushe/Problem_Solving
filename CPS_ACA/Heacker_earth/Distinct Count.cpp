#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,d;
        cin>>n>>d;
        int count=0;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n-1;i++){
            if(v[i]!=v[i+1]){
                count++;
            }
        }
        count++;
        if(count==d){
            cout<<"Good"<<endl;
        }else if(count>d){
            cout<<"Average"<<endl;
        }else{
            cout<<"Bad"<<endl;
        }
    }
    return 0;
}
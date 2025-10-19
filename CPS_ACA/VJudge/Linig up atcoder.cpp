#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    map<int,int>mp;
    vector<int>ans;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int front;
    for(int i=1;i<n;i++){
        if(v[i-1]==-1){
            front =i;
        }else{ 
            swap(v[i],i);
        }
    }
    v[0]=front;
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}
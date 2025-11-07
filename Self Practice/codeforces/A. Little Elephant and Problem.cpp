#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    vector<int>v(n);
    vector<int>v1(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }for(int i=0;i<n;i++){
        v1[i]=v[i];
    }
    int count=0;
    sort(v1.begin(),v1.end());
    for(int i=0;i<n;i++){
        if(v[i]!=v1[i]){
            count++;
        }
    }
    if(count==0 || count==2){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
    return 0;

}
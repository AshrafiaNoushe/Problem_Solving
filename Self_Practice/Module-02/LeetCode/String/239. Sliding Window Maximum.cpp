#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int i=0,j=0,sum=0,maxi=INT_MIN;
    while(j<n){
        sum+=v[j];
        if(j-i+1<k){
            j++;
        }else if(j-i+1==k){
            
        }
    }
}
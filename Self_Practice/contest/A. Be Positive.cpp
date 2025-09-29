#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int count0=0,count_1=0,count_11=0,op;
    for(int i=0;i<n;i++){
        if(v[i]==0){
            count0++;
        }
        if(v[i]==-1){
            count_1++;
        }
    }
    if(count_1%2 !=0){
        count_11=2;
    }
    op = count0+count_11;
    cout<<op<<endl;
}
return 0;
}
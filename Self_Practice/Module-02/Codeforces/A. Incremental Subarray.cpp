#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<long long int>v(m);
        for(int i=0;i<m;i++){
            cin>>v[i];
        }
        bool chk=true;
        for(int i=0;i<m;i++){
            if(v[i]!=i+1){
                chk = false;
                break;
            }

        }
        if(chk){
            cout<<n-v[m-1]+1<<endl;
        }else{
            cout<<"1"<<endl;
        }
    }
    return 0;
}
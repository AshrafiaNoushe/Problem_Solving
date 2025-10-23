#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int t = n+m;
    map<string,string>mp;
    for(int i=0;i<n;i++) //server & ip
    {
        string server,ip;
        cin>>server>>ip;
        mp[ip]=server;

    }
    for(int i=0;i<m;i++) //server & ip
    {
        string command,ip;
        cin>>command>>ip;
        ip.pop_back();
        cout<<command<<" "<<ip<<"; #"<<mp[ip]<<endl;
    }
    return 0;
}
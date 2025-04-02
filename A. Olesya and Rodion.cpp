#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t,i,n;
    cin>>n>>t;
    string s = "";
    if(t<10){
        for(i=0;i<n;i++){
            s = s+ to_string(t);
        }
    }else{
        if(n>1){
            s = s + "1";
            for(i=1;i<n;i++){
                s = s + "0";
            }
        }else{
            cout<<-1;
            return 0;
        }
    }
    cout<<s<<endl;
    return 0;
}
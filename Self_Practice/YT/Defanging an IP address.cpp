#include<bits/stdc++.h>
using namespace std;
int main()
{
    string address;
    cin>>address;
    string ans="";
    int index =0;
    while(index<address.size()){
        if(address[index]=='.'){
            ans+="[.]";
        }else{
            ans=ans+address[index];
        }
        index++;
    }
    cout<<ans<<endl;
    return 0;
}
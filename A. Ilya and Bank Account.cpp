#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    if(n>=0){
        cout<<n<<endl;
    }else{
        int last_dlt = n/10;
        int sec_last_dlt = (n/100)*10 + (n%10);
        int ans = max(last_dlt,sec_last_dlt);
        cout<<last_dlt<<" "<<sec_last_dlt<<" "<<ans<<endl;
        cout<<ans<<endl;
    }
    return 0;
}
    

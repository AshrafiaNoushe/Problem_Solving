#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int diff = abs(a-b);
        int count = 2*diff;
        if(a>count || b>count ||c>count || a==b){
            cout<<"-1"<<endl;
        }else{
            int adddiff = c+diff;
            if(adddiff>count){
                cout<< c- diff<<endl;
            }else{
                cout<<adddiff<<endl;
            }
        }
    }
    return 0;
}
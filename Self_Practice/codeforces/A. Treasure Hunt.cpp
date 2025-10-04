#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        long long int x,y,a;
        cin>>x>>y>>a;
        double target = a+0.5;
        double full_cycle = floor(target/(x+y));
        double depth = full_cycle*(x+y);
        if(depth+x>target){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        } 
    }
    return 0;
}
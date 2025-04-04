#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,a=0;
        cin>>n;
        for(int i=1;i<n;i++){
            a++;
        }
        cout<<a<<endl;
    }
    return 0;
}
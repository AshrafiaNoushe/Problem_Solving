#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int one = 0;
        for(int i=0;i<n;i++){
            if(a[i]=='1'){
                one++;
            }
        }
        cout<<(one*(n-1)+(n-one))<<endl;
    }
    return 0;
}
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
        int a[n+10];
        int b[n+10];
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        int max1 = a[1];
        for(int i=1;i<=n;i++){
            b[i]=max(a[i],max1);
            max1 = b[i];

        }
        long long sum=0;
        b[0]=0;
        for(int i=n;i>=1;i--){
            long long current = max(a[i],b[i-1]);
            cout<<sum+current<<" ";
            sum += a[i];
        }
        cout<<endl;
    }
    return 0;
}


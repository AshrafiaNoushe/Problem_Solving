#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int a1=0,a2=0,a3=0,a4=0;
    for(int i=0;i<n;i++){
        if(a[i]==1){
            a1++;
        }if(a[i]==2){
            a2++;
        }if(a[i]==3){
            a3++;
        }if(a[i]==4){
            a4++;
        }
    }
    int ans = a4;
    int pair3_1 = min(a3,a1);
    ans += a3;
    a1 -=pair3_1;
    ans += a2/2;
    a2 = a2%2;
    if(a2==1){
        ans++;
        a1 -= min(2,a1);
    }
    if(a1>0){
        ans +=(a1+3)/4;
    }
    cout<<ans<<endl;
}


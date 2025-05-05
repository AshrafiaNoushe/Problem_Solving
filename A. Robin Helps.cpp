#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        int cnt =0;
        int pep=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            }
            for(int i=0;i<n;i++){
            if(a[i]>=k){
                cnt+=a[i];
                a[i]=0;
            }else{
                if(a[i]==0 && cnt!=0){
                    pep++;
                    cnt--;
                }
            }
        }
        cout<<pep<<endl;
    }
}
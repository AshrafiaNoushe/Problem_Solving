#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        long long int x,m,n;
        cin>>x>>n>>m;
        long long n1 = n,n2=n;
        long long m1 = m,m2 = m;
        long long step = 60;
        long long temp_min =x ,temp_max = x;
        for(int i =0;i<step && m1>0 && temp_min>0;i++){
            temp_min = (temp_min+1)/2;
            m1--;
        }
        for(int i=0;i<step && n1>0 && temp_min>0;i++){
            temp_min = temp_min/2;
            n1--;
        }
        for(int i=0;i<step&& n2>0 && temp_max>0;i++){
            temp_max = temp_max/2;
            n2--;
        }for(int i=0;i<step && m2>0 && temp_max>0;i++){
            temp_max = (temp_max+1)/2;
            m2--;
        }
        cout<<temp_min<<" "<<temp_max<<endl;
    }
    return 0;
}
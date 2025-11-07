#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        long long a[n+10][n+10];
        map<int,int>mp;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cin>>a[i][j];
                mp[i+j]=a[i][j];
            }
        }
        vector<int>v;
        set<int>st;
        for(int i=1;i<=2*n;i++){
            if(mp[i]!=0){
                st.insert(mp[i]);
            }
        }
        for(int i=1;i<=2*n;i++){
            if(st.find(i)==st.end()){//kono st er i value pawar posibility nai a to z search deci so oi i ke ami vector e push kore decci
                v.push_back(i);
            }
        }
        for(int i=1;i<=2*n;i++){
            if(mp[i]==0){
                cout<<v.back()<<" ";//amr kace map er i position e value nai tai v theke value anci print dci abar dlt dci
                v.pop_back();//son 2n position fill kora lagbe so ami missing v theke last value ta anci mp e
            }else{
                cout<<mp[i]<<" ";
            }
        }
        cout<<endl;
        
    }
    return 0;
}
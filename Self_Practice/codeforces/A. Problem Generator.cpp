#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        int count[7]={0};
        for(char c: s){
            count[c-'A']++;
        }
        int left = 0;
        for(int i=0;i<7;i++){
            if(count[i]<m){
                left += (m-count[i]);
            }
        }
        cout<<left<<endl;
    }
    return 0;
}
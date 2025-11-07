#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int>upper(26,0);
        for(int i=0;i<s.size();i++){
            upper[s[i]-'A']++;
        }
        int count=0,sum=0;
        for(int i=0;i<26;i++){
            if(upper[i]>=i+1){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
     set<pair<string,string>>st;
    while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        st.insert({s1,s2});    
    }
    cout<<st.size()<<"\n";
    return 0;
}
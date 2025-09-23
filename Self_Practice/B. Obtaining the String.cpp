#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s,t;
    cin>>s;
    cin>>t;
    int pos = -1;
    vector<int>v;
    for(int i=0;i<n;i++){
        if(s[i]==t[i]){
            continue;
        }
        for(int j = i+1;j<n;j++){
            if(s[j]==t[i]){
                pos = j;
                break;
            }
        }
        if(pos == -1){
            cout<<"-1"<<endl;
            return 0;
        }
        for(int j=pos-1;j>=i;j--){
            swap(s[j],s[j+1]);
            v.push_back(j);

        }

    }
    if(s==t){
        cout<<v.size()<<endl;
        for(int i=0;i<v.size();i++){
            cout<<v[i]+1<<" ";
        }
    }else{
        cout<<"-1"<<endl;
    }
    return 0;
}
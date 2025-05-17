#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char c;
        cin>>c;
        string s;
        cin>>s;
        s+=s;
        if(c=='g'){
            cout<<"0"<<endl;
            continue;
        }
        int count =0;
        int max_diff = 0;
        bool check = false;
        for(int i=0;i<s.size();i++){
            if(s[i]=='g'){
                max_diff=max(max_diff,count);
                check = false;
            }
            if (s[i]==c && check == false){
                check = true;
                count =0;
            }
            if(check){
                count++;
            }
        }
        cout<<max_diff<<endl;
    }
    return 0;
}
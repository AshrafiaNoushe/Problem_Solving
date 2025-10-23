#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string cp ="zzz";
        for(int i=0;i<26;i++){
            for(int j=0;j<26;j++){
                for(int k=0;k<26;k++){
                    if(i+j+k+3==n){
                        string s="";
                        s+=char(i+'a');
                        s+=char(j+'a');
                        s+=char(k+'a');
                        cp = min(s,cp);
                        
                    }
                }
            }
        }
        cout<<cp<<endl;
    }
    return 0;
}
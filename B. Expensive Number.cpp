#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int index = s.size()-1;
        int ans =0;
        for(int i=s.size()-1;i>=0;i--){
            int a = s[i]-'0';//convert string to int
            if(a>=1){
                index = i;//je indext e last theke count kore 0 bade digit thakbe;
                break;
            }else{
                ans++;//kono number 1 er upor nah paile mean 0 hole ki hobe
            }

        }
        for(int i=0;i<index;i++){
            if(s[i]!='0'){//index er age 0 count korbo nah cz 0 kono effect korbe nah
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
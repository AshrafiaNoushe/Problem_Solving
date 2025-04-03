#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,i;
        cin>>n;
        string num,num1;
        while(n--){
            string s;
            //int i;
            cin>>s;
            for( i=0;i<s.size();i++){
                if(s[i]=='#'){
                    num+=to_string(i+1);
                }
            }
            // for(int i=s.size()-1;i>=0;i--){
            //     num1.push_back(num[i]);
            // }
        }
        num1 = num;
            reverse(num1.begin(),num1.end());
            for(i=0;i<num1.size();i++){
                cout<<num1[i]<<" ";
            }
            cout<<endl;
        }
    return 0;
}
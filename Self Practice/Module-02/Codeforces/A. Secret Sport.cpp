#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        char x = s[s.size()-1];
        if(x=='A'){
            cout<<"A"<<endl;
        }else if(x=='B'){
            cout<<"B"<<endl;
        }else{
            cout<<"?"<<endl;
        }
    }
    return 0;
}
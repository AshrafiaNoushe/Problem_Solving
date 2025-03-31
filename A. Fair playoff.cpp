#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int s[4];
        for(int i=0;i<4;i++){
            cin>>s[i];
        }
        int first_two=0,last_two=0,x,y;
        first_two = max(s[0],s[1]);
        x = min(s[0],s[1]);
        y = min(s[2],s[3]);
        last_two = max(s[2],s[3]);
        if(first_two>y && last_two >x){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
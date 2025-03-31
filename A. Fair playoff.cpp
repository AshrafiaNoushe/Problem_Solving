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
        int fir=0,lir=0,x,y;
        fir = max(s[0],s[1]);
        x = min(s[0],s[1]);
        y = min(s[2],s[3]);
        lir = max(s[2],s[3]);
        if(fir>y && lir >x){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
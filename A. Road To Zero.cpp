#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        long long x,y;
        cin>>x>>y;
        long long a,b;
        cin>>a>>b;
        if(x==0 && y==0){
            cout<<"0"<<endl;
        }else if(x>0 && y>0){
            int diff = abs(x-y);
            int val = diff*a;
            if(2*a<b){
                cout<<abs(((min(x,y))*a)*2+val)<<endl;
            }else{
                cout<<abs((min(x,y)*b)+val)<<endl;
            }
        }else if(x<0 && y<0){
            int diff = abs(abs(x)-abs(y));
            int val = diff*a;
            if(2*a<b){
                cout<<abs(((min(x,y)*a)*2)+val)<<endl;
            }else{
                cout<<abs(min(x,y)*b+val)<<endl;
            }
        }else{
            cout<<abs(abs(x)+abs(y))*a<<endl;
        }

    }
    return 0;
}
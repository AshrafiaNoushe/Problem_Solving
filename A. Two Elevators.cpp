#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        // if(b==1){
        //     b=c;
        // }
        int x = abs(1-a);
        int y = abs(b-c) + abs(1-c);
        if(x>y){
            cout<<"2"<<endl;
        }else if(x<y)
        {
            cout<<"1"<<endl;
        }else{
            cout<<"3"<<endl;
        }

    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        long long int x,y,a;
        cin>>x>>y>>a;
        long long int total_day =0;
        long double depth = a+0.5;
        while(true){
            total_day +=x;
            if(total_day>=depth){
                cout<<"NO"<<endl;
                break;
            }
            total_day +=y;
            if(total_day>=depth){
                cout<<"YES"<<endl;
                break;
            }

        }

    }
    return 0;
}
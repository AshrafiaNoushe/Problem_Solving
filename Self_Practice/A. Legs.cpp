#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count=0;
        if(n%4!=0){
            count++;
        }
        int count1 = n/4;
        cout<<count+count1<<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>> t;
    while(t--)
    {
        int w,h,n;
        cin>>w>>h>>n;
        int sheet = 1;
        while(w%2==0){
            w/=2;
            sheet *= 2;
        }
        while(h%2==0){
            h/=2;
            sheet *=2;
        }
        if(sheet>=n){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
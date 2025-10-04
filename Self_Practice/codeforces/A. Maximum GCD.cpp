#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int max_gcd = n/2; //gcd between 1 to n is always in between n/2 and n that's why their gcd will be n/2;
        cout<<max_gcd<<endl;
    }
    return 0;
}
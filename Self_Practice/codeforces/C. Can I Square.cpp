#include<bits/stdc++.h>
using namespace std;
bool is_square(long long int sum){
    long long int root = sqrt(sum);
    return root*root == sum;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int a[n];
        for(long long int i=0;i<n;i++){
            cin>>a[i];
        }
        long long int sum=0;
        for(long long int i=0;i<n;i++){
            sum+=a[i];
        }
        if(is_square(sum)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
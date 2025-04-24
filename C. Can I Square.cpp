#include<bits/stdc++.h>
using namespace std;
bool is_square(int sum){
    int root = sqrt(sum);
    return root*root == sum;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int sum=0;
        for(int i=0;i<n;i++){
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
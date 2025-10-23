#include<bits/stdc++.h>
using namespace std;
int count_timer(int n,int k){
    int total=240-k,left_time =0,count=0;
    for(int i=1;i<=n;i++){
        left_time += 5*i;
        if(left_time>total){
            break;
        }
        count++;
    }
    return count;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;
    cin>>n>>k;
    int ans = count_timer(n,k);
    cout<<ans<<endl;
    return 0;
}
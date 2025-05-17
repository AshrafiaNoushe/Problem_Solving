#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int>v1 = a ;
        sort(v1.begin(),v1.end());
        int s = v1.size();
        int max1 = v1[s-1];
        int max2 = v1[s-2];
        vector<int>v2;
        //cout<<"Max1"<<max1<<"Max2"<<max2<<endl;
        for(int i = 0;i<n;i++){
            if(a[i]==max1){
                v2.push_back( max1-max2);
            }else{
                v2.push_back(a[i] - max1);
            }
        }
        for(int i=0;i<n;i++){
            cout<<v2[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int i,j;
    char a[n+10][n+10];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            int count =0;
            if(i>0 && a[i-1][j]=='o'){
                count++;
            }
            if(i<n-1 && a[i+1][j]=='o'){
                count++;
            }
            if(j>0 && a[i][j-1]=='o'){
                count++;
            }
            if(j<n-1 && a[i][j+1]=='o'){
                count++;
            }
            if(count%2!=0){
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
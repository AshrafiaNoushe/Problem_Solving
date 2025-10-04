#include<bits/stdc++.h>
using namespace std;
void process_fun(int n,int k){
    string s;
    cin>>s;
    int count =0;
    for(int i=0;i<k;i++){
      if(s[i]=='W') count++;
    }
    int min_w_count = count;
    for(int i=k;i<n;i++){
      if(s[i-k]=='W'){
        count--;
      }if(s[i]=='W'){
        count++;
      }
      min_w_count = min(count,min_w_count);
    }
  cout<<min_w_count<<endl;
}
int main()
{
int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    process_fun(n,k);
  }
  return 0;
}
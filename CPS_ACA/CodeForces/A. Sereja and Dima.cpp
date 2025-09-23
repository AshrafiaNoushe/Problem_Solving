#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int moves=0,sr=0,dm=0;
    int score=0;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
       if(v.back()>v.front()){
        score = v.back();
        v.pop_back();
       }else{
        score=v.front();
        v.erase(v.begin());
       }
       if(moves%2==0){
        sr+=score;
       }else{
        dm+=score;
       }
        moves++;
    }
    cout<<sr<<" "<<dm<<endl;
    return 0;
    
}
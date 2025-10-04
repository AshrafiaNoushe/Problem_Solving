#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<string,int>m;
    m["c"]=1;
    m["b"]=5;
    m["a"]=2;
    for(auto pr:m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}
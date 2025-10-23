#include <bits/stdc++.h>
using namespace std;

void solve(string s1, string s2) {
    int n1=s1.size(),n2=s2.size();
    int count=0;
    bool chk = false;
    for(int i=0;i<5;i++){
        if(s1.find(s2)!=-1){
            cout<<i<<endl;
            chk = true;
            break;
        }s1+=s1;
    }
    if(!chk){
        cout<<"-1"<<endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s1, s2;
        cin >> s1 >> s2;
        solve(s1, s2);
    }
}
#include<bits/stdc++.h>
using namespace std;
void solve(string& s){
    string s1;
    int count =0;
    while(!s.empty()){
        if(s.back()=='a'||s.back()=='e'){
            count=2;
        }else{
            count =3;
        }
        while(count){
            s1+=s.back();
            s.pop_back();
            count--;
        }s1+='.';
    }
    s1.pop_back();
    reverse(s1.begin(),s1.end());
    cout<<s1<<endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        solve(s);
    }
    return 0;
}

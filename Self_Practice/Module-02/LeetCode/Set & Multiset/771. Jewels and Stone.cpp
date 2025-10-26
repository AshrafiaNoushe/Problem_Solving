//here TC= O(n*m)
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int count =0;
    for(auto it:s2){
        for(auto it1:s1){
            if(it1==it){
                count++;
            }
        }
    }
    cout<<count<<"\n";

    return 0;
}*/
//Using set, Here TC=O(logn)
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int count =0;
    set<char>jwl;
    for(auto c: s1){
        jwl.insert(c);
    }
    for(auto c: s2){
        if(jwl.count(c)){
            count++;
        }
    }
    cout<<count<<"\n";

    return 0;
}
//s1=z s2=ZZ
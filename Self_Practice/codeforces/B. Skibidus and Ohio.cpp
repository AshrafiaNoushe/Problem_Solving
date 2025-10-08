#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        int count=0;
        cin>>s;
        int size = s.size();
        for(int i=0;i<size-1;i++){
            if(s[i]==s[i+1]){
               count=1 ;//eikhane bolse je kono letter deye replace korte pari
               //so ami or ager letter diye rep kobo then same same
               //abar rmv+ager letter deye rep
               //porer letter deyeo rep korte pari
               //eivabe 1ta thakbe tkhn ar kichui korte parbo nah so ultimate 1 ashbe
                
            }
        }
        if(count==0) cout<<s.size()<<endl;
        else cout<<count<<endl;
    }
    return 0;
}
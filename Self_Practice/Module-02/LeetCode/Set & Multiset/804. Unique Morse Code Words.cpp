#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
     cin>>n;
   vector<string>words(n);
   for (int i = 0; i < n; i++) {
        cin >> words[i];
    }
   vector<string>morse={
    ".-","-...","-.-.","-..",".","..-.","--.",
    "....","..",".---","-.-",".-..","--","-.",
    "---",".--.","--.-",".-.","...","-","..-",
    "...-",".--","-..-","-.--","--.."
   };
   set<string>st;
   for(auto it:words){
    string s ="";
    for(auto it1:it){
        s+=morse[it1-'a'];
    }
    st.insert(s);
   }
   cout<<st.size()<<endl;

    return 0;
}
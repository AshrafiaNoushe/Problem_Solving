#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string sortSentence(string s) {
        vector<string>ans(10);
        string temp;
        int index =0,count=0;
        while(index<s.size()){
            if(s[index]==' '){
                int pos = temp[temp.size()-1]-'0';
                temp.pop_back();
                ans[pos] = temp;
                count++;
                temp.clear();
            }else{
                temp+=s[index];
            }
            index++;
        }
        if(!temp.empty()){
            int pos = temp[temp.size()-1]-'0';
            temp.pop_back();
            ans[pos]=temp;
            count++;
            temp.clear();
        }
        temp = "";
        for(int i=1;i<=count;i++){
            temp+=ans[i];
            temp+=" ";
        }
        temp.pop_back();
        return temp;
        
    }
};
int main()
{
    return 0;
}
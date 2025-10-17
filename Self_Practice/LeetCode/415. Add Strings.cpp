#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string addStrings(string num1, string num2) {
        int index1 = num1.size()-1;
        int index2 = num2.size()-1;
        int sum=0,carry =0;
        string ans="";
        while(index2>=0){
            sum = (num1[index1]-'0')+ (num2[index2]-'0')+carry;
            carry = sum/10;
            char c = '0'+sum%10;
            ans+=c;
            index2--;
            index1--;

        }
        while(index1>=0){
            sum = (num1[index1]-'0')+carry;
            carry = sum/10;
            char c = '0'+ sum%10;
            ans+=c;
            index1--;
        }
        if(carry){
            ans+='1';
        }
        reverse(ans.begin(),ans.end());
        return ans;
       
    }
    string comparee(string num1,string num2){
        if(num1.size()<num2.size()){
            return addStrings(num2,num1);
        }else{
        return addStrings(num1,num2);
        }
    }
};
int main()
{
    Solution obj;
    string num1,num2;
    cin>>num1>>num2;
    string s =obj.comparee(num1,num2);
    cout<<s<<endl;

}
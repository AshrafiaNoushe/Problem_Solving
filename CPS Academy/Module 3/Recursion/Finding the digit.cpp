#include<bits/stdc++.h>
using namespace std;
int cnt=0;
void rec(int num){
    if(num==0){
        return;
    }
    int temp = num/10;
    int dig = num - temp*10;
    cnt++;
    cout<<dig<<" "<<cnt<<endl;
    
    rec(temp);
}
void reverse_rec(int num)
{
if(num==0){
        return;
    }
    int temp = num/10;
    int dig = num - temp*10;
    reverse_rec(temp);
    cnt++;
    cout<<dig<<" "<<cnt<<endl;
}
int main()
{
    int number;
    cin>>number;
    rec(number);
    cout<<"reverse: "<<"\n";
    reverse_rec(number);
}
#include<bits/stdc++.h>
using namespace std;
string rotate_clkwise(string& clk){
    int index = clk.size()-1;
    char c = clk[clk.size()-1];
    for(int i=index;i>=0;i--){
        clk[i]=clk[i-1];
    }
    clk[0]=c;
    return clk;
}
string rotate_anticlkwise(string& anticlk){
    char c = anticlk[0];
    for(int i=0;i<anticlk.size()-1;i++){
        anticlk[i]=anticlk[i+1];
    }
    anticlk[anticlk.size()-1]=c;
    return anticlk;

}
int main()
{
    string s;
    string s2;
    cin>>s>>s2;
    string clockwise=s;
    string ansticlockwise=s;
    rotate_clkwise(clockwise);
    rotate_clkwise(clockwise);
    //cout<<clockwise<<endl;
    rotate_anticlkwise(ansticlockwise);
    rotate_anticlkwise(ansticlockwise);
    //cout<<ansticlockwise<<endl;
     if(ansticlockwise==s2 || clockwise==s2){
        cout<<"True"<<endl;;
    }else{
        cout<<"False"<<endl;
    }
    return 0;
}
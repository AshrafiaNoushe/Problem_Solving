#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int m,s;
    cin>>m>>s;
    if(s<=0){
        if(m==1){
            cout<<"0 0"<<endl;
            return 0;
        }else{
            cout<<"-1 -1"<<endl;
            return 0;
        }
    }else{
        string maximum;
        string minimum;
        for(int i=0;i<m;i++){
            int x = min(9,s);
            maximum.push_back('0'+x);
            s-=x;
        }
        if(s>0)
        {
            cout<<"-1 -1"<<endl;
            return 0;
        }
      //minimum = reverse(maximum.begin(),maximum.end()); 
      for(int i = m-1;i>=0;i--){
        minimum.push_back(maximum[i]);
      }
      if(minimum[0] == '0'){
        int j=0;
        while(minimum[j]=='0'){
           j++; 
        }
        minimum[j]--;
        minimum[0]='1';
      }     
        cout<<minimum<<" "<<maximum<<endl;
    }

}
#include<bits/stdc++.h>
using namespace std;
vector<int>f(10,-1);
int fibo(int n){
    if(n==0) return 0;
    else if(n==1) return 1;
    if(f[n]!=-1){ //age check rakhaa ache ki na, thakle return
        return f[n];
    }
   f[n] = fibo(n-1)+fibo(n-2); //nah rakha thakle oitay store korbo
   return f[n];// then return;
}
int main()
{
    int n;
    cin>>n;
    int n_th = fibo(n);
    cout<<n_th<<endl;
}
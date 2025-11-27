#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n*fact(n-1);
}
int main()
{
int n;
cin>>n;
int f = fact(n);
cout<<"Factorial of: "<<n<<" is: "<<f<<"\n";
return 0;
}
#include<bits/stdc++.h>
using namespace std;
int powRec(int b, int a){
    if(a==0){
        return 1;
    }
    int ans = b;
    ans = ans*powRec(b,a-1);
    return ans;
}
int main()
{
    int b, a;
    cin>>b>>a;
    int pow = powRec(b,a);
    cout<<"Pow is: "<<pow<<"\n";
    return 0;

}
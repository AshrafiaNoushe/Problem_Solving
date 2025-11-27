#include<bits/stdc++.h>
using namespace std;
int k = 6;
bool isOk(int m){
    if(m<=k){
        return 1;
    }else{
        return 0;
    }
}
int main()
{
int arr[] =  {1, 3, 6, 6, 7, 9};
int n = 6;  //T, T, T, T, F, F
int l =0,r= 7;
while(l<r){
    int mid = (l+r)/2;
    if(isOk(mid)){
        //i will return first False
        l = mid+1;
    }else{
        r = mid;
    }
}
cout<<"First F: "<<l<<endl;
return 0;
}

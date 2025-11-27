#include<bits/stdc++.h>
using namespace std;
int arr[] = {1, 3, 6, 6, 7, 9};
int val = 7;
bool isOk(int m){
    if(arr[m]<=val){
        return 1;
    }else{
        return 0;
    }

}
int main()
{
   int n = 6;
   int l =0, r=n;
   while(l<r){
    int mid = (l+r)/2;
    if(isOk(mid)){
        l = mid+1;
    }else{
        r = mid;
    }
   }
   cout<<"Found at: "<<l<<endl;
   return 0;
}
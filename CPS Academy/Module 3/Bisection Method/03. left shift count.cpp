#include<bits/stdc++.h>
using namespace std;
int arr[]={5,6,7,8,9,1,2,3,4};
bool isOk(int m){
    if(arr[0]>arr[m]){
        return 1;
    }else{
        return 0;
    }
}
int main()
{
    int n = 9;
    int l =0, r= 9;
    while(l<r){
        int mid = (l+r)/2;
        if(isOk(mid)){
            r = mid;
        }else{
            l = mid+1;
        }
    }
    cout<<"left shifted: "<<n-l<<endl;
    return 0;

}
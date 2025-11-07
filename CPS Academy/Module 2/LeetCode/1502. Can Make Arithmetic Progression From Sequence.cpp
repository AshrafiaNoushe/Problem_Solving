#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int d = arr[0]-arr[1];
        for(int i=1;i<arr.size();i++){
            if((arr[i-1]-arr[i])!=d){
                return false;
            }
        }
        return true;
    }
};
int main()
{
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i=0,j=0,sum=0,maxi=INT_MIN;
        double avg = 0.00;
        while(j<nums.size()){
            sum+=nums[j];
            if(j-i+1<k){
                j++;
            }else if(j-i+1==k){
                maxi =  max(sum,maxi);
                sum = sum-nums[i];
                i++;
                j++;
            }
        }
        avg = (double)maxi/k;
        return avg;
    }
};
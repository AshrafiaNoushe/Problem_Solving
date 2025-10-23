#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>mp;
        vector<int>ans;
        for(auto it: nums1){
            mp[it]++;
        }
       
        for(auto it:nums2){
            if(mp[it]>0){
                ans.push_back(it);
                mp[it]=0;
            }
        }
        return ans;
        
    }
};
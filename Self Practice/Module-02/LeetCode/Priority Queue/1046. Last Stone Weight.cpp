#include<iostream>
#include<vector>
#include<queue>

using namespace std;
class Solution {
public:
    int lastStoneWeight(vector<int>& v) {
    	priority_queue<int>pq;
    	for(int i=0;i<v.size();i++){
    		pq.push(v[i]);
    	}
    	while(pq.size()>1){
        int y = pq.top(); pq.pop();
        int x = pq.top();pq.pop();
        if(x!=y){
            pq.push(y-x);

        }
    }
    if(pq.empty()){
        return 0;
    }else {
    	return pq.top();
    }
        
    }
};
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
    	cin>>v[i];
    }
    Solution obj;
    int ans = obj.lastStoneWeight(v);
    cout<<ans<<"\n";
    return 0;
}
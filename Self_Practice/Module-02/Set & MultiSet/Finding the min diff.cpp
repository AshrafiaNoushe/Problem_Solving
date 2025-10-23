// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>> n;
//     std::vector<int> v(n);
//     for(int i=0;i<n;i++)
//     {
//         cin>>v[i];
//     }
//     int mini = INT_MAX;
//     for(int i=1;i<n;i++){
//         int sum = abs(v[i]-v[i-1]);
//         mini = min(sum,mini);
//         cout<<mini<<" ";
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    set<int>st;
    int x;
    int ans = INT_MAX;
    for(int i=0;i<n;i++){
        cin>>x;
        if(st.count(x)){
            ans =0;
        }
        st.insert(x);
        if(i==0){
            continue; // just 1st val er jnno diff hbe nah
        }
        auto prev = st.find(x);
        if(prev!=st.begin()){
            prev--;
            ans = min(ans,x- *prev);
        }
        auto next = st.find(x);
        next++;
        if(next!=st.end()){
            ans = min(ans,*next-x);
        }
        cout<<ans<<endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (auto &it : v)
    {
        cin >> it;
    }
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < k; i++)
    {
        pq.push(v[i]);
    }
    cout << pq.top() << "\n";
    for (int i = k; i < n; i++)
    {
        pq.push(v[i]);
        pq.pop();
        cout << pq.top() << "\n";
    }

    return 0;
}
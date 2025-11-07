#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    vector<int> v1;
    vector<int> v2;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int i = 0, j = 0, num;
    while (j < n)
    {
        if (v[j] < 0)
        {
            num = v[j];
            v1.push_back(num);
        }
        if (j - i + 1 < k)
        {
            j++;
        }
        else if (j - i + 1 == k)
        {
            if (!v1.empty())
            {
                v2.push_back(v1[0]);
                if (v[i] == v1[0]) v1.erase(v1.begin());

            }else{
                v2.push_back(0);
            }
            i++;
            j++;
        }
    }
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }
    cout << endl;
    return 0;
}
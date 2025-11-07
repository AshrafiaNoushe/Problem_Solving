#include <bits/stdc++.h>
using namespace std;
void check_pall(string s)
{
    int count = 0;
    bool odd = 0;
    vector<int> upper(26, 0), lower(26, 0); // SC = O(2)=O(1);
    for (int i = 0; i < s.size(); i++)
    { // TC = O(26)=O(1);
        if (s[i] >= 'a')
        {
            lower[s[i] - 'a']++;
        }
        else
        {
            upper[s[i] - 'A']++;
        }
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (lower[i] % 2 == 0)
        {
            count = count + lower[i];
        }
        else
        {
            count = count + lower[i] - 1;
            odd = 1;
        }
        if (upper[i] % 2 == 0)
        {
            count += upper[i];
        }
        else
        {
            count = count + upper[i] - 1;
            odd = 1;
        }
    }
    if (odd)
    {
        cout << count + 1 << endl;
    }
    else
    {
        cout << count << endl;
    }
}
int main()
{
    string s;
    cin >> s;
    check_pall(s);
    return 0;
}
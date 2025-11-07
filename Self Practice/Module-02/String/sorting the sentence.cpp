#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    vector<string> ans(10);
    string temp;
    int index = 0;
    int n = s.size();
    while (index < n)
    {
        if (s[index] == ' ')
        {
            int pos = temp[temp.size() - 1] - '0';
            temp.pop_back();
            ans[pos] = temp;
            index++;
            temp.clear();
        }
        else
        {
            temp += s[index];
            index++;
        }
        
    }
    if (!temp.empty())
    {
        int pos = temp[temp.size() - 1] - '0';
        temp.pop_back();
        ans[pos] = temp;
    }
    temp = "";
    for (int i = 1; i < 10; i++)
    {
        temp += ans[i];
        temp += " ";
    }
    temp.pop_back();
    cout << temp;
    return 0;
}
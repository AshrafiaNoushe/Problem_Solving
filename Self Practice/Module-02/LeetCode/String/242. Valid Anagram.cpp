#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> mp1, mp2;

        for (auto it : s) mp1[it]++;
        for (auto it : t) mp2[it]++;

        if (mp1.size() != mp2.size()) return false;

        for (auto it : mp1) {
            char ch = it.first;
            int val = it.second;
            if (mp2.find(ch) == mp2.end() || mp2[ch] != val)
                return false;
        }

        return true;
    }
};

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    Solution sol;
    bool ck = sol.isAnagram(s1, s2);
    cout << (ck ? "true" : "false") << endl;
    return 0;
}

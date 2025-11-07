#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b;
        cin >> a >> b;
        int count = 0;

        if(a > b) {
            int x = a - b;
            if(x % 2 == 0) x += 1;
            while(b < a) {  // b must catch up to a
                b += x;
                count++;
            }
        } else if(a < b) {
            int x = b - a;
            if(x % 2 != 0) x += 1;
            while(a < b) {  // a must catch up to b
                a += x;
                count++;
            }
        } else {
            count = 0;
        }

        cout << count << endl;
    }
    return 0;
}

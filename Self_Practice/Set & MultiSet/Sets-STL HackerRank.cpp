#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
int n;
cin>>n;
set<int>st;
while(n--){
    int type,x;
    cin>>type>>x;
    if(type==1){
        st.insert(x);
    }else if(type==2){
        st.erase(x);
    }else if(type==3){
        if(st.find(x)!=st.end()){
            cout<<"Yes"<<endl;
        }else{ cout<<"No"<<endl;
        }
    }
}
    return 0;
}




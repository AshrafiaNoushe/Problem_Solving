#include<bits/stdc++.h>
using namespace std;
map<int,string>m;
void print_map(map<int,string>&m){
     for(auto mp: m){
        cout<<mp.first<<" "<<mp.second<<endl;
    }
}
int main()
{
    m[1]="abc"; //for every O(logn)
    m[5]="xyz";
    m[3]="mno";
    m[2];
    //normally print
    //print using iterator
    // map<int,string>::iterator it;
    // for(it=m.begin();it!=m.end();++it){
    //     cout<<(*it).first<<" "<<(*it).second;
    // }
    print_map(m);
    cout<<endl;
    auto itt = m.find(2); //auto likhsi jekono datatype hoite pare itt
    //map.find(key);
    //if we want to find ele but if the ele doesn't exist so it will show error while compiling 
    //to avoid it we will use a condition:
    if(itt!=m.end()){
        cout<<(*itt).first<<" "<<(*itt).second;
    }
    //if we want to erase a specific element from a map //in map ele == pair
    //first find the pair itt(pos) then simply erase the key
    auto it = m.find(5);
    if(it!=m.end()){
        m.erase(it);//O(logn)
    }
    print_map(m);
    //if we want to clean whole map
    m.clear(); //map size =0;
    

}
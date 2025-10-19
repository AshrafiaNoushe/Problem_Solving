#include <iostream>
using namespace std;
#include<queue>

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    scanf("%d",&t);
    queue<int> q;
    while (t--)
    {
        int qtype;
        scanf("%d",&qtype);
        if (qtype == 1)
        {
            int x;
            scanf("%d",&x);
            q.push(x);
        }else if(qtype==2){
            if(!q.empty()){
                q.pop();
            }
        }else if(qtype==3){
            if(!q.empty()){
                printf("%d\n",q.front());
            }else{
                printf("Empty!\n");
            }
        }
    }
    return 0;
}
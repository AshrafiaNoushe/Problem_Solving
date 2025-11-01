#include<iostream>
using namespace std;
const int mx = 1002;
char adjM[mx][mx];
int main()
{
    int n;
    int m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){//i based indexing i=1; 1,1 1,2 1,3;
        for(int j=1;j<=m;j++){
            scanf(" %c",&adjM[i][j]); //%c er age space nibo as alwas c type er jnno
            // ei grid/adjMatrix er khetre input nibo scanf deye
        }
    }
    cout<<"Adjacent Matrix"<<"\n";
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<adjM[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
}
/* 
4
3
#.#
...
.#.
#..

*/
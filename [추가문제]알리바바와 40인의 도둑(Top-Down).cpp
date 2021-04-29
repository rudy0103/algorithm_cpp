// 알리바바와 40인의 도둑(Top-Down)
#include<iostream>
#include<algorithm>

using namespace std;

int map[21][21];
int dis[21][21];
int dx[]={-1,0};
int dy[]={0,-1};
int n;
int  DFS(int x, int y){

    if(x<1 || x> n || y<1 || y>n) return 2147000000;
    if(dis[x][y]!=0) return dis[x][y];
    else {
        int a = DFS(x-1,y);
        int b = DFS(x,y-1);
        return dis[x][y]= min(a,b)+map[x][y];

    }



}

int main(){
    ios_base::sync_with_stdio(false);
    int i,j;
    // freopen("input.txt", "rt", stdin);
    cin>>n;

    for(i = 1; i<=n ; i++){
        for(j = 1; j<=n; j++){
            cin>>map[i][j];
        }
    }
    dis[1][1]=map[1][1];
    DFS(n,n);

    cout<<dis[n][n];


    return 0;
}
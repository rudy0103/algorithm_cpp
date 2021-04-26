//89. 토마토(BFS 활용)

#include<stdio.h>
#include<time.h>
#include<iostream>
#include<queue>

using namespace std;

int main(){
    clock_t start, end;
    double result;
    start = clock();
    freopen("input.txt", "rt", stdin);
    //----------------------------------------------------------------------------------------------------------
    queue<pair<int,int>> Q;

    int m,n;
    int i,j;
    int dx[]={-1,0,1,0};
    int dy[]={0,1,0,-1};
    int map[1001][1001];
    int x,y;
    pair<int,int> p;
    cin>>m>>n;

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>map[i][j];
            if(map[i][j]==1){
                Q.push(make_pair(i,j));
            }
        }
    }

    while (!Q.empty())
    {
        p=Q.front();
        Q.pop();

        for(i=0; i<4; i++){
            x=p.first+dx[i];
            y=p.second+dy[i];

            if(x>=0 && x<n && y>=0 && y<m){
                if(map[x][y]==0){
                    map[x][y]=map[p.first][p.second]+1;
                }else if (map[p.first][p.second]+1<map[x][y]){
                    map[x][y]=map[p.first][p.second]+1;
                }
            }
        }
    }
    
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cout<<map[i][j]<<" ";
        }
        cout<<endl;
    }
    



    //------------------------------------------------------------------------------------------------------------
    // end = clock();
    // result = (double)(end - start);
    // printf("\ntime: %f",result);


    return 0;
}
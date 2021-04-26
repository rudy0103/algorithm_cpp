// 88.미로의 최단거리 통로(BFS) 활용

#include<stdio.h>
#include<time.h>
#include<iostream>
#include<queue>

int map[9][9];

using namespace std;

int main(){
    clock_t start, end;
    double result;
    start = clock();
    freopen("input.txt", "rt", stdin);
    //----------------------------------------------------------------------------------------------------------
    int i,j;

    queue<pair<int,int>> Q;
    pair<int,int> p;
    int dx[]={1,0,-1,0};
    int dy[]={0,-1,0,1};

    for(i=0;i<9;i++){
        for(j=0;j<0;j++){
            map[i][j]=1;
        }
    }

    for(i=1;i<=7;i++){
        for(j=1;j<=7;j++){
            cin>>map[i][j];
        }
    }
    Q.push(make_pair(1,1));

    while (!Q.empty())
    {
        p=Q.front();
        Q.pop();

        for(i=0;i<4;i++){
            int next_x=p.first+dx[i];
            int next_y=p.second+dy[i];

            if(next_x>0 && next_x <8 && next_y>0 && next_y <8){
                if(map[next_x][next_y]==0){
                    map[next_x][next_y]=map[p.first][p.second]+1;
                    Q.push(make_pair(next_x,next_y));
                }
            }

            if(next_x==7 && next_y==7) break;
        }

        
    }
    
    if(map[7][7]==0) cout<<"impossible";
    else cout<<map[7][7];



    //------------------------------------------------------------------------------------------------------------
    // end = clock();
    // result = (double)(end - start);
    // printf("\ntime: %f",result);


    return 0;
}
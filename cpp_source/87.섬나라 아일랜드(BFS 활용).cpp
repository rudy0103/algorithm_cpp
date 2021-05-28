// 87.섬나라 아일랜드(BFS 활용)

#include<stdio.h>
#include<time.h>
#include<iostream>
#include<queue>

int map[21][21];
int n;


using namespace std;

int main(){
    clock_t start, end;
    double result;
    start = clock();
    freopen("input.txt", "rt", stdin);
    //----------------------------------------------------------------------------------------------------------
    int i,j,k;
    int cnt=0;
    int dx[]={1,0,-1,0,-1,1,1,-1};
    int dy[]={0,-1,0,1,-1,1,-1,1};
    int x,y;
    queue<pair<int,int>> Q;
    pair<int,int> p;
    cin>>n;

    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cin>>map[i][j];
        }
    }

    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(map[i][j]==1){
                Q.push(make_pair(i,j));
                while(!Q.empty()){
                    p=Q.front();
                    Q.pop();
                    map[p.first][p.second]=0;
                    for(k = 0 ; k<8;k++){
                        x=p.first+dx[k];
                        y=p.second+dy[k];
                        if(x<=n && x >0 && y>0 && y<=n){
                            if(map[x][y]==1){
                                Q.push(make_pair(x,y));
                            }
                        }

                    }
                }cnt++;
            }
        }
    }

    cout<<cnt;
    //------------------------------------------------------------------------------------------------------------
    // end = clock();
    // result = (double)(end - start);
    // printf("\ntime: %f",result);


    return 0;
}
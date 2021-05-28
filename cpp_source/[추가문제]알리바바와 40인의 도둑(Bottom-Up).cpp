// 알리바바와 40인의 도둑(Bottom-Up)
#include<stdio.h>
#include<time.h>
#include<iostream>
#include<queue>


using namespace std;

int map[25][25];
int dis[25][25];

int main(){
    clock_t start, end;
    double result;
    start = clock();
    freopen("input.txt", "rt", stdin);
    //----------------------------------------------------------------------------------------------------------
    ios_base::sync_with_stdio(false);
    queue<pair<int,int>> Q;
    int n;
    int i, j;
    int dx[]={1,0};
    int dy[]={0,1};
    int tmp;
    cin>>n;

    for(i=1; i<=n; i++){
        for(j=1;j<=n; j++){
            cin>>map[i][j];
            dis[i][j]=0;
        }
    }
    pair<int,int> p;
    Q.push(make_pair(1,1));
    dis[1][1]=map[1][1];

    for(i = 2; i<=n ; i++) dis[1][i]=dis[1][i-1]+map[1][i];
    for(i = 2; i<=n ; i++) dis[i][1]=dis[i-1][1]+map[i][1];

    for(i=2; i<=n; i++){
        for(j=2; j<=n ; j++){
            dis[i][j]= min(dis[i-1][j],dis[i][j-1])+map[i][j];
        }
    }


    // while (!Q.empty())
    // {
    //     p=Q.front();
    //     Q.pop();
        
    //     for(i=0;i<2;i++){
    //         int xx = p.first+dx[i];
    //         int yy = p.second+dy[i];

    //         if(xx>n || yy>n) continue;

    //         if(dis[xx][yy]==0){
    //             dis[xx][yy]=dis[p.first][p.second]+map[xx][yy];
    //             Q.push(make_pair(xx,yy));
    //         }
    //         else if(dis[xx][yy]>dis[p.first][p.second]+map[xx][yy]){
    //             dis[xx][yy]=dis[p.first][p.second]+map[xx][yy];
    //             Q.push(make_pair(xx,yy));
    //         }
            
    //     }

    // }
    
 


    cout<<dis[n][n];


    //------------------------------------------------------------------------------------------------------------
    // end = clock();
    // result = (double)(end - start);
    // printf("\ntime: %f",result);


    return 0;
}
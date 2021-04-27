//90. 라이언 킹 심바(삼성 SW역량 평가 기출 BFS 활용)

#include<stdio.h>
#include<time.h>
#include<queue>
#include<iostream>

using namespace std;

int n;
int map[25][25];
int dis[25][25];
int s, ate;
int dx[]={1,0,-1,0};
int dy[]={0,-1,0,1};

struct State{
    int x;
    int y;
    int z;

    State(int a, int b, int c){
        x=a;
        y=b;
        z=c;
    }

    bool operator<(const State &bb)const{
        if(z!=bb.z) return z>bb.z;
        if(x!=bb.x) return x>bb.x;
        if(y!=bb.y) return y>bb.y;
    }
};

struct Lion{
    int x, y, s, ate;
    void sizeUp(){
        ate=0;
        s++;
    }
};


void update_distance(pair<int,int> now){
    int i,j;
    int m[25][25];
    int next_x,next_y;

    queue<pair<int,int>> Q;
    pair<int,int> p;
    Q.push(now);

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            m[i][j]=map[i][j];
            dis[i][j]=0;
        }
    }

    while (!Q.empty())
    {
        p=Q.front();
        Q.pop();

        for(i=0;i<4;i++){
            next_x=p.first+dx[i];
            next_y=p.second+dy[i];

            if(next_x>=0 && next_x <n && next_y>=0 && next_y <n){
                if(m[next_x][next_y]<=s && dis[next_x][next_y]==0){
                    m[next_x][next_y]=m[p.first][p.second]+1;
                    dis[next_x][next_y]=m[p.first][p.second]+1;
                    Q.push(make_pair(next_x,next_y));
                }
            }
        }
    }


}


int main(){
    // freopen("input.txt", "rt", stdin);
    //----------------------------------------------------------------------------------------------------------
    int i,j;
    int sec=0;


    s=2;
    ate=0;
    State a(0,0,0);
    pair<int,int> now;

    cin>>n;

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>map[i][j];
            if(map[i][j]==9){
                now=make_pair(i,j);
                map[i][j]=0;
            }
        }
    }

    while(true){
        priority_queue<State> pQ;
        int dist=-1;
        int min_dist=999999;
        update_distance(now);
        
        for(i = 0; i<n; i++){
            for(j=0 ; j<n; j++){
                if(map[i][j]<s && map[i][j]!=0){//심바보다 크기가 작은 토끼들 거리를 각각 계산한후 우선순위큐에 넣어야함
                    dist=dis[i][j];
                    if(dist!=0 && dist<=min_dist){
                        min_dist=dist;
                        pQ.push(State(i,j,dist));
                    }
                    
                }
            }
        }
        // break;
        if(pQ.empty()){
            printf("%d",sec);
            break;
        }

        a = pQ.top();
        // cout<<a.x<<","<<a.y<<" "<<a.z<<endl;
        map[a.x][a.y]=0;
        sec+=a.z;
        ate++;
        if(s==ate){
            s++;
            ate=0;

        }
        now=make_pair(a.x,a.y);

    }

    return 0;
}
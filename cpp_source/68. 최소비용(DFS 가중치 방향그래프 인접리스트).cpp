//68. 최소비용(DFS: 가중치 방향그래프 인접리스트)

#include <stdio.h>
#include <time.h>
#include <vector>

int min_cost=2147000000;
int ch[21]={0};

using namespace std;

void DFS(vector<pair<int,int>> *map,int v, int cost, int n){
    int i;
    if(v==n){
        if(cost<min_cost){
            min_cost=cost;
        }
    }
    else{
        for(i = 0; i<map[v].size();i++){
            if(ch[map[v][i].first]==0){
                ch[map[v][i].first]=1;
                cost+=map[v][i].second;
                DFS(map,map[v][i].first,cost,n);
                ch[map[v][i].first]=0;
                cost-=map[v][i].second;

            }

        }

        }
}


int main(){
    clock_t start, end;
    double result;
    start = clock();
    // freopen("input.txt", "rt", stdin);
    //----------------------------------------------------------------------------------------------------------
    int n,m;
    int s,d,c;
    int i;
    int cnt=0;

    scanf("%d %d",&n, &m);
    vector<pair<int,int>> map[21];

    for(i = 0; i< m ; i++){
        scanf("%d %d %d",&s,&d,&c);
        map[s].push_back({d,c});
    }
    DFS(map,1,0,n);

    printf("%d",min_cost);


    


    //------------------------------------------------------------------------------------------------------------
    // end = clock();
    // result = (double)(end - start);
    // printf("\ntime: %f",result);


    return 0;
}
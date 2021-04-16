// 70. 그래프 최단거리(BFS)

#include <stdio.h>
#include <time.h>
#include <vector>
#include <deque>

using namespace std;



int main(){
    clock_t start, end;
    double result;
    start = clock();
    freopen("input.txt", "rt", stdin);
    //----------------------------------------------------------------------------------------------------------
    int n,m;
    int i,j,k;
    int s,d;
    int x,tmp;
    int cnt[21];
    int quit =1;
    scanf("%d %d",&n,&m);
    vector<int> graph[21];
    deque<int> que;

    for(i = 0;i<m;i++){
        scanf("%d %d",&s,&d);
        graph[s].push_back(d);
    }
    for(i = 2; i<=n;i++){
        cnt[i]=9999999;
    }
    cnt[1]=0;
    que.push_back(1);
    tmp=1;
    while(!que.empty()){
        x = que.front();
        que.pop_front();
        for(j=0; j<graph[x].size();j++){
            k= graph[x][j];
            tmp=cnt[x]+1;
            if(cnt[k] > tmp){
                cnt[k]=tmp;
                que.push_back(graph[x][j]);
            }
        }

    }




    for(i = 2; i<=n; i++){
        printf("%d : %d\n",i,cnt[i]);
    }


    //------------------------------------------------------------------------------------------------------------
    // end = clock();
    // result = (double)(end - start);
    // printf("\ntime: %f",result);


    return 0;
}
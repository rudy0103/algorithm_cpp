// 80. 다익스트라 알고리즘
#include<stdio.h>
#include<time.h>
#include<vector>


using namespace std;

int dist[21];
int ch[21];
int n,m;
vector<pair<int,int>> map[21];

void dijkstra(int v){
    int min=2147000000;
    int i,pos;
    int d,c;
    int cost;
    pos=v;

    for(i = 0; i<map[v].size(); i++){
            d=map[v][i].first;
            c=map[v][i].second;
            cost=dist[v]+c;
            if(dist[d]>cost){
                dist[d]=cost;
            }
    }

    for(i = 1; i<=n; i++){
        if(ch[i]==0){
            if(dist[i]<=min){
                pos=i;
                min=dist[i];
            }
        }
    }

    ch[pos]=1;
    if(dist[pos]!=2147000000) dijkstra(pos);

}

int main(){
    clock_t start, end;
    double result;
    start = clock();
    freopen("input.txt", "rt", stdin);
    //------------------------------------------------------------------------------------------------------------
    int i;
    int a,b,c;
    scanf("%d %d",&n,&m);

    for(i=1; i<=m; i++){
        scanf("%d %d %d",&a,&b,&c);
        map[a].push_back(make_pair(b,c));
    }

    for(i = 1; i<= n; i++){
        dist[i]=2147000000;
    }
    dist[1]=0;
    dijkstra(1);

    for(i = 2; i<= n ;i++){
        printf("%d : ",i);
        if(dist[i]==2147000000) printf("impossible\n");
        else printf("%d\n",dist[i]);
    }



    //------------------------------------------------------------------------------------------------------------
    // end = clock();
    // result = (double)(end - start);
    // printf("\ntime: %f",result);


    return 0;
}
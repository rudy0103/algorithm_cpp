//79_2 원더랜드 Prim MST(최소스패닝트리) 알고리즘 priority queue활용

#include<stdio.h>
#include<time.h>
#include<algorithm>
#include<vector>
#include<queue>

using namespace std;

struct Edge
{
    int e;
    int cost;
    Edge(int a, int b){
        e=a;
        cost=b;

    }
    bool operator<(const Edge &b)const{
        return cost>b.cost; //b.cost가 작은쪽으로 정렬 즉 최소힙
        // return cost<b.cost //b.cost가 큰쪽으로 정렬 최대힙
    }
};


int ch[30];


int main(){
    clock_t start, end;
    double result;
    start = clock();
    freopen("input.txt", "rt", stdin);
    //----------------------------------------------------------------------------------------------------------
    int v,e;
    int i;
    int a,b,c;
    int total=0;
    scanf("%d %d",&v,&e);
    vector<pair<int,int>> vec[30];
    priority_queue<Edge> pQ;

    for(i = 1; i<= e; i++){
        scanf("%d %d %d",&a,&b,&c);
        vec[a].push_back(make_pair(b,c));
        vec[b].push_back(make_pair(a,c));
    }

    pQ.push(Edge(1,0));

    while(!pQ.empty()){
        Edge tmp=pQ.top();
        pQ.pop();
        int e=tmp.e;
        int cost = tmp.cost;
        
        if(ch[e]==0){
            ch[e]=1;
            total+=cost;

            for(i = 0; i <vec[e].size();i++){
                pQ.push(Edge(vec[e][i].first,vec[e][i].second));
            }
        }



    }

    printf("%d",total);

    //------------------------------------------------------------------------------------------------------------
    // end = clock();
    // result = (double)(end - start);
    // printf("\ntime: %f",result);


    return 0;
}
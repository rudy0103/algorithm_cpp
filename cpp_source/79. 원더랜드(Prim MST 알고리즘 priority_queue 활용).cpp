// 79. 원더랜드(Prim MST 알고리즘 priority_queue 활용)
#include<stdio.h>
#include<time.h>
#include<vector>
#include<queue>

using namespace std;
int main(){
    clock_t start, end;
    double result;
    start = clock();
    // freopen("input.txt", "rt", stdin);
    //----------------------------------------------------------------------------------------------------------
    int v,e;
    int a,b,c;
    int ch[26]={0};
    int total=0;
    int cnt=0;
    pair<int,int> p,q;
    vector<pair<int,int>> vec[26];
    scanf("%d %d",&v,&e);
    priority_queue<pair<int,int>> pQ;

    for(int i = 1; i<= e; i++){
        scanf("%d %d %d",&a,&b,&c);
        vec[a].push_back({c,b});
        vec[b].push_back({c,a});
    }

    pQ.push(make_pair(0,1));

    while (true)
    {
        p=pQ.top();
        pQ.pop();
        if(ch[p.second]==0){
            ch[p.second]=1;
            total+=-p.first;
            cnt++;
        }
        if(cnt==v) break;

        for(int i = 0 ; i<vec[p.second].size();i++){
            q=vec[p.second][i];
            q.first=-q.first;
            if(ch[q.second]==0){
                pQ.push(q);
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
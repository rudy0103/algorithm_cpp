// 66. 경로 탐색(DFS : 인접리스트 방법)

#include <stdio.h>
#include <time.h>
#include <vector>

using namespace std;
int cnt=0;
int n;
int check[21];

void DFS(vector<int> *g,int a){
    int i;
    if(a==n){
        cnt++;
    }
    else{
        for(i = 0; i<g[a].size(); i++){
            if( check[g[a][i]]==0){
                check[g[a][i]]=1;
                DFS(g,g[a][i]);
                check[g[a][i]]=0;
            }
        }

    }

}

int main(){
    clock_t start, end;
    double result;
    start = clock();
    freopen("input.txt", "rt", stdin);
    //----------------------------------------------------------------------------------------------------------
    int m;
    int i;
    int s,d;
    scanf("%d %d",&n,&m);

    vector<int> g[21];

    for(i =1; i<=m; i++){
        scanf("%d %d",&s,&d);
        g[s].push_back(d);
    }
    check[1]=1;

    DFS(g,1);

    printf("%d",cnt);



    //------------------------------------------------------------------------------------------------------------
    // end = clock();
    // result = (double)(end - start);
    // printf("\ntime: %f",result);


    return 0;
}
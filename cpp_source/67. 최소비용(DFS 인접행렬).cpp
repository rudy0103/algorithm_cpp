// 67. 최소비용(DFS : 인접행렬)

#include <stdio.h>
#include <time.h>

using namespace std;

int map[21][21];
int ch[21];
int min=2147000000;

void DFS(int v, int n,int cost){
    int i;
    if(v==n){
        if(cost<min){
            min=cost;
        }
        
    }else{
        for(i = 1; i<= n; i++){
            if(map[v][i]>=1 && ch[i]==0){
                ch[i]=1;
                cost+=map[v][i];
                DFS(i,n,cost);
                ch[i]=0;
                cost-=map[v][i];
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
    int i;
    int n,m;
    int s, d, c;

    scanf("%d %d",&n,&m);


    for(i = 0; i< m ;i++){
        scanf("%d %d %d",&s,&d,&c);
        map[s][d]=c;
    }
    ch[1]=1;

    DFS(1,n,0);

    printf("%d",min);



    //------------------------------------------------------------------------------------------------------------
    // end = clock();
    // result = (double)(end - start);
    // printf("\ntime: %f",result);


    return 0;
}
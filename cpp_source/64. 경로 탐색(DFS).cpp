// 64. 경로 탐색(DFS)

#include <stdio.h>
#include <time.h>

using namespace std;

int cnt;

int a[21][21];
int b[21];

int n,m;
void DFS(int l,int s){
    int i,j;
    if(l>n){
        return;
    }
    else{
        if(s==n){
            cnt++;
        }else{
            b[s]=1;
            for(i = 2; i<=n ; i++){
                if(a[s][i] == 1 && b[i]==0){
                    DFS(l+1,i);
                }
            }
            b[s]=0;
        }

    }
}

int main(){
    clock_t start, end;
    double result;
    start = clock();
    // freopen("input.txt", "rt", stdin);
    //---------------------------------------------------------------------------------------------------------
    int i;
    int s,d; //s start , d destination
    scanf("%d %d",&n,&m);

    for(i = 1; i<=m ; i++){
        scanf("%d %d",&s,&d);
        a[s][d]=1;
    }
    b[1]=1;
    a[n][n]=1;

    DFS(1,1);
    printf("%d",cnt);






    //------------------------------------------------------------------------------------------------------------
    // end = clock();
    // result = (double)(end - start);
    // printf("\ntime: %f",result);


    return 0;
}
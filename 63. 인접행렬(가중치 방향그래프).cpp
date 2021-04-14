// 63. 인접행렬(가중치 방향그래프)

#include <stdio.h>
#include <time.h>
#include <vector>

using namespace std;

int main(){
    clock_t start, end;
    double result;
    start = clock();
    freopen("input.txt", "rt", stdin);
    //----------------------------------------------------------------------------------------------------------
    int n,m;
    int i,j;
    int s, d, c;

    scanf("%d %d",&n,&m);
    vector<vector<int>> map(n,vector<int>(n,0));


    for(i = 0; i<m; i++){
        scanf("%d %d %d",&s,&d,&c); //start, destination, cost
        map[s-1][d-1]=c;
    }

    for(i = 0 ; i < n; i++){
        for(j = 0 ; j < n; j++){
            printf("%d ",map[i][j]);
        }
        printf("\n");
    }




    //------------------------------------------------------------------------------------------------------------
    // end = clock();
    // result = (double)(end - start);
    // printf("\ntime: %f",result);


    return 0;
}
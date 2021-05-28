//47. 봉우리

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
    int n;
    // int a[52][52] = {0};
    int i, j,k ,cnt=0;
    int dx[4] ={-1, 0, 1, 0};
    int dy[4] ={0, 1, 0 ,-1};
    bool b = true;
    scanf("%d",&n);
    vector<vector<int>> a(n+2, vector<int>(n+2, 0)); //-> 기본적으로 0으로 초기화 , 다른값 넣을 수 있음

    for(i =1 ; i <=n ; i++){
        for(j = 1; j<=n; j++){
        scanf("%d",&a[i][j]);
        }
    }
    
    for(i =1 ; i <=n ; i++){
        for(j = 1; j<=n; j++){
            b =true;
            for(k = 0 ; k< 4 ;k++){
                if(a[i][j] <= a[i+dx[k]][j+dy[k]]){
                    b =false;
                    break;
                }
            }
            if(b) cnt++;
        }

    }

    printf("%d",cnt);


    //------------------------------------------------------------------------------------------------------------
    // end = clock();
    // result = (double)(end - start);
    // printf("\ntime: %f",result);


    return 0;
}
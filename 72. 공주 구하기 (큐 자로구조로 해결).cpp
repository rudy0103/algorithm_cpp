// 72. 공주 구하기 (큐 자로구조로 해결)


#include <stdio.h>
#include <time.h>
#include <queue>

using namespace std;

int main(){
    clock_t start, end;
    double result;
    start = clock();
    freopen("input.txt", "rt", stdin);
    //----------------------------------------------------------------------------------------------------------
    int n,k,i,j;
    int tmp;
    scanf("%d %d",&n,&k);
    queue<int> Q;

    for( i =1; i<=n ; i++){
        Q.push(i);
    }
    // printf("%d %d",n,k);

    while (!Q.empty())
    {
        for(i = 1 ; i<=k ; i++){
            tmp = Q.front(); 
            Q.pop();
            if(i!=k) Q.push(tmp);
        }
    }

    printf("%d",tmp);
    


    //------------------------------------------------------------------------------------------------------------
    // end = clock();
    // result = (double)(end - start);
    // printf("\ntime: %f",result);


    return 0;
}
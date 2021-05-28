// 58. 이진트리 깊이우선탐색(DFS)
#include <stdio.h>
#include <time.h>

using namespace std;

void D(int v){
    if(v > 7) return;
    else{
        D(v*2);
        D(v*2+1);
        printf("%d ",v);
    }
}

int main(){
    clock_t start, end;
    double result;
    start = clock();
    freopen("input.txt", "rt", stdin);
    //----------------------------------------------------------------------------------------------------------
    D(1);



    //------------------------------------------------------------------------------------------------------------
    // end = clock();
    // result = (double)(end - start);
    // printf("\ntime: %f",result);


    return 0;
}
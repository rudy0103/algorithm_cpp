// 71. 송아지 찾기 (BFS : 상태트리탐색)

#include <stdio.h>
#include <time.h>
#include <deque>
#include <math.h>

using namespace std;

int main(){
    clock_t start, end;
    double result;
    start = clock();
    freopen("input.txt", "rt", stdin);
    //----------------------------------------------------------------------------------------------------------
    int s, e;
    int i;
    int cnt=0;
    int x;
    int state,tmp;
    int move[3] ={ -1, 1, 5};
    scanf("%d %d",&s,&e);
    deque<int> Q;
    Q.push_back(s);
    x=s;
    state=2147000000;
    while (x!=e)
    {
        x=Q.front();
        if(x==e) break;
        Q.pop_front();
        for(i = 0 ; i <3; i++){
            tmp=x+move[i];
            if(abs(e-tmp) < abs(e-state)){
                state =tmp;
            }
        }
        Q.push_back(state);
        cnt++;



    }

    printf("%d",cnt);
    
    //------------------------------------------------------------------------------------------------------------
    // end = clock();
    // result = (double)(end - start)/CLOCKS_PER_SEC;
    // printf("\ntime: %fs",result);


    return 0;
}
// 74. 최소힙(priority_queue 우선순위 큐)

#include<stdio.h>
#include<time.h>
#include<queue>
#include<algorithm>

using namespace std;

int main(){
    clock_t start, end;
    double result;
    start = clock();
    // freopen("input.txt", "rt", stdin);
    //----------------------------------------------------------------------------------------------------------
    int n,i;
    int num;
    priority_queue<int> pQ;

    while(true){
        scanf("%d",&num);
        if(num == 0){
            if(pQ.empty()){
                printf("-1");
                break;
            }
            printf("%d\n",-pQ.top());
            pQ.pop();
        }
        else if (num == -1){
            return 0;
        }
        else{
            num=-num;
            pQ.push(num);
        }
    }
    



    //------------------------------------------------------------------------------------------------------------
    // end = clock();
    // result = (double)(end - start);
    // printf("\ntime: %f",result);


    return 0;
}
// 69. 이진트리 넓이우선탐색(BFS)

#include <stdio.h>
#include <time.h>
#include <vector>



using namespace std;

int Q[100];
int front = -1, back = -1;
int ch[10];
vector<int> map[10];


int main(){
    clock_t start, end;
    double result;
    start = clock();
    freopen("input.txt", "rt", stdin);
    //-----------------------------------------------------------------------------------------------------------
    int i;
    int a,b,x;
    for(i =1 ; i <= 6; i++){
        scanf("%d %d", &a,&b);
        map[a].push_back(b);
        map[b].push_back(a);
    }
    Q[++back] = 1;
    ch[1] =1;

    while (front<back)
    {
        x=Q[++front];
        printf("%d ",x);
        for(i = 0 ; i < map[x].size();i++){
            if(ch[map[x][i]]==0){
                ch[map[x][i]]=1;
                Q[++back]= map[x][i];
            }
        }
    }
    



    //------------------------------------------------------------------------------------------------------------
    // end = clock();
    // result = (double)(end - start);
    // printf("\ntime: %f",result);


    return 0;
}
// 65.미로탐색

#include <stdio.h>
#include <time.h>

using namespace std;
int map[10][10]={1};
int ch[8][8];
int cnt;
int da[4] = {1, 0 ,-1, 0};
int db[4] = {0, 1, 0 ,-1};


void DFS(int a, int b){
    int i;
    if(a==7 && b==7){
        cnt++;
    }
    else{
        for(i = 0; i< 4 ;i++){
            if(map[a+da[i]][b+db[i]] ==0 && ch[a+da[i]][b+db[i]]==0){
                ch[a+da[i]][b+db[i]]=1;
                DFS(a+da[i],b+db[i]);
                ch[a+da[i]][b+db[i]]=0;
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
    int i,j;


    for(i = 0; i<=9 ;i++){
        for(j=0; j<=9; j++){
            map[i][j]=1;
        }

    }

    for(i = 1; i<=7 ;i++){
        for(j=1; j<=7; j++){
            scanf("%d",&map[i][j]);
        }
    }

    map[1][1] = 1;
    ch[1][1] = 1;
    DFS(1,1);
    printf("%d",cnt);

    //------------------------------------------------------------------------------------------------------------
    // end = clock();
    // result = (double)(end - start);
    // printf("\ntime: %f",result);


    return 0;
}
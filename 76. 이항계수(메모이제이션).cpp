// 76. 이항계수(메모이제이션)
#include<stdio.h>
#include<time.h>

using namespace std;

int table[300][300];

int DFS(int n, int r){
    int a;
    int b;
    if(n==r || r==0) { 
       table[n][r]=1;
       return 1;
    }
    else{
        if(table[n][r]==0)
        {
            a = DFS(n-1,r-1);
            b = DFS(n-1,r);
            table[n][r]=a+b;
            return a+b;
        }
        else{
            return table[n][r];
        }
    }
}

int main(){
    clock_t start, end;
    double result;
    start = clock();
    freopen("input.txt", "rt", stdin);
    //----------------------------------------------------------------------------------------------------------
    int n,r;
    int i;
    scanf("%d %d",&n,&r);
    printf("%d\n",DFS(n,r));
    //------------------------------------------------------------------------------------------------------------
    // end = clock();
    // result = (double)(end - start);
    // printf("\ntime: %f",result);


    return 0;
}
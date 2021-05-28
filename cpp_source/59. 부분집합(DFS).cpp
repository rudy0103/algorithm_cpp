// 59. 부분집합(DFS)
#include <stdio.h>
#include <time.h>
using namespace std;

int n;
int a[11];
void DFS(int a[], int l){
    int i;
    int j;


    if(l == n+1){
        for(i=1; i<=n;i++){
            if(a[i]!=0) printf("%d ",i);
        }
        printf("\n");

    }else{
        


        a[l]=1;
        DFS(a, l+1);

        a[l]=0;
        DFS(a, l+1);

    }


}


int main(){
    clock_t start, end;
    double result;
    start = clock();
    freopen("input.txt", "rt", stdin);
    //----------------------------------------------------------------------------------------------------------
    int i;
    scanf("%d",&n);
    DFS(a,1);



    //------------------------------------------------------------------------------------------------------------
    // end = clock();
    // result = (double)(end - start);
    // printf("\ntime: %f",result);


    return 0;
}
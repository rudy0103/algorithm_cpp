// 60. 합이 같은 부분집합(DFS : 아마존 인터뷰)
#include <stdio.h>
#include <time.h>

using namespace std;

int n;
int a[11];
int b[11];
int flag=0;

void DFS(int L){
    int i, sum = 0;
    if(flag==1) return;

    if(L==n+1){
        for(i=1 ; i<= n ; i++){
            if(b[i]==1){
                sum+=a[i];
            }else{
                sum-=a[i];
            }
        }
        if(sum==0){
            flag=1;
        }

    }
    else{

        b[L]=1;
        DFS(L+1);
        b[L]=0;
        DFS(L+1);

    }
}

int main(){
    clock_t start, end;
    double result;
    start = clock();
    // freopen("input.txt", "rt", stdin);
    //----------------------------------------------------------------------------------------------------------
    scanf("%d",&n);

    for(int i = 1; i<=n ; i++){
        scanf("%d",&a[i]);
    }
    DFS(1);
    if(flag==1){
        printf("YES");
    }else{
        printf("NO");
    }



    //------------------------------------------------------------------------------------------------------------
    // end = clock();
    // result = (double)(end - start);
    // printf("\ntime: %f",result);


    return 0;
}
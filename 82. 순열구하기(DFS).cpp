// 82. 순열구하기(DFS)

#include<stdio.h>
#include<time.h>


using namespace std;
int n,r;
int cnt;
int a[20];
int b[20];
int ch[20];

void DFS(int l){
    int j;
    if(l>r) {
        for(j=1;j<=r;j++){
            printf("%d ",b[j]);
        }
        printf("\n");
        cnt++;
        return;
    }
    else{
        for(j = 1; j<=n; j++){
            if(ch[j]==0){
                ch[j]=1;
                b[l]=a[j];
                DFS(l+1);
                ch[j]=0;
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
    int i;
    scanf("%d %d",&n,&r);

    for(i = 1; i<=n; i++){
        scanf("%d",&a[i]);
    }
    // for(i = 1; i<=n; i++){
    //     printf("%d ",a[i]);
    // }
    a[0]=0;
    DFS(1);
    printf("%d",cnt);

    //------------------------------------------------------------------------------------------------------------
    // end = clock();
    // result = (double)(end - start);
    // printf("\ntime: %f",result);


    return 0;
}
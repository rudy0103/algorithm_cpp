// 39. 두 배열 합치기
#include <stdio.h>
#include <time.h>

using namespace std;

int main(){
    clock_t start, end;
    double result;
    start = clock();
    // freopen("input.txt", "rt", stdin);
    //----------------------------------------------------------------------------------------------------------
    int n,m;
    int i,j,k;
    int a[101], b[101];
    int c[201];
    scanf("%d",&n);
    
    for(i = 0; i < n ;i++){
        scanf("%d",&a[i]);
    }

    scanf("%d",&m);

    for(i = 0 ; i < m ; i++){
        scanf("%d",&b[i]);
    }
    i=0;
    j=0;
    k=0;

    while(1){

        if(a[i] <= b[j]){
            c[k]=a[i];
            k++;
            i++;
        }else{
            c[k] =b[j];
            k++;
            j++;
        }

        if(i==n || j==m){
            break;
        }
    }

    if(i==n){
        for(i=j; i<m; i++){
            c[k]=b[i];
            k++;
        }
    }else{
        for(j=i; j<n; j++){
            c[k] = a[i];
        }
    }


    for(i = 0; i <k ; i++){
        printf("%d ",c[i]);
    }

    //------------------------------------------------------------------------------------------------------------
    // end = clock();
    // result = (double)(end - start);
    // printf("\ntime: %f",result);


    return 0;
}

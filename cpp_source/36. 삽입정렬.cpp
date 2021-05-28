//36. 삽입정렬
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <time.h>

using namespace std;

int main(){
    clock_t start, end;
    double result;
    start = clock();
    freopen("input.txt", "rt", stdin);
    //----------------------------------------------------------------------------------------------------------
    int a[101], n,i,j,tmp,idx;

    scanf("%d",&n);

    for(i = 0; i<n ; i++){
        scanf("%d",&a[i]);
    }

    for(i = 1; i < n; i++){
        tmp=a[i];
        idx = i;
        for(j = i-1; j >=0; j--){
            if(a[j] > a[i]){
                idx = j;
            }
        }
        for(j = i-1; j>=idx;j--){
            a[j+1]=a[j];
        }
        a[idx]=tmp;
        
    }

    for(i = 0 ; i < n; i++){
        printf("%d ",a[i]);
    }


    //------------------------------------------------------------------------------------------------------------
    // end = clock();
    // result = (double)(end - start);
    // printf("\ntime: %f",result);


    return 0;
}
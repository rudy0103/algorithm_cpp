//35. Special Sort(구글 인터뷰)

#include <stdio.h>
#include <algorithm>
#include <vector>
#include <time.h>

using namespace std;

int main(){
    clock_t start, end;
    double result;
    start = clock();
    // freopen("input.txt", "rt", stdin);
    //----------------------------------------------------------------------------------------------------------
    int n,i,j, tmp, idx, a[101];
    scanf("%d",&n);

    for(i = 0 ; i < n ; i ++){
        scanf("%d",&a[i]);
    }

    for( i = 1; i < n ;i++){
        if(a[i] < 0 ){
            for(j = i -1 ; j >=0 ; j--){
                if(a[j] > 0){
                    tmp = a[i];
                    a[i] = a[j];
                    a[j] = tmp;
                    i--;
                }
            }

        }
    }

    for(i = 0 ;i < n ; i++){
        printf("%d ",a[i]);
    }


    //------------------------------------------------------------------------------------------------------------
    // end = clock();
    // result = (double)(end - start);
    // printf("\ntime: %f",result);


    return 0;
}
//33. 3등의 성적은?
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
    int n , a[100];
    int i,j,tmp,idx, cnt, max;

    scanf("%d",&n);

    for(i = 0 ; i < n; i++){
        scanf("%d",&a[i]);
    }

    for(i = 0; i < n -1 ; i++){
        idx = i;
        for(j = i+1; j<n ; j++){
            if(a[idx] < a[j] )
            {
                idx = j;
            }

        }
        tmp = a[i];
        a[i] = a[idx];
        a[idx] = tmp;
    }
    cnt = 0;
    max = 2147000000;
    for( i = 0 ; i < n ;i++){
        if(a [i] < max){
            max = a[i];
            cnt++;
        }
        if(cnt == 3){
            printf("%d",a[i]);
            break;
        }
    }



    //------------------------------------------------------------------------------------------------------------
    // end = clock();
    // result = (double)(end - start);
    // printf("\ntime: %f",result);


    return 0;
}
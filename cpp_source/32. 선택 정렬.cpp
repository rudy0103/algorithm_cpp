//32. 선택정렬

#include <stdio.h>
#include <algorithm>
#include <vector>
#include <time.h>

using namespace std;

int main(){
    clock_t start, end;
    double result;
    start = clock();
    // int a[100];
    freopen("input.txt", "rt", stdin);
    //----------------------------------------------------------------------------------------------------------
    int i,idx,n,j;
    int tmp;
    scanf("%d",&n);

    vector<int> a(n);

    for(i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }

    for(i = 0; i < n - 1; i++){
        idx=i;
        for(j = i+1; j < n ; j++){
            if(a[j] < a[idx]){
                idx = j;
            }
        }
        tmp = a[i];
        a[i] = a[idx];
        a[idx]= tmp;

    }

    for(i = 0 ; i <n; i++){
        printf("%d ",a[i]);
    }


    //------------------------------------------------------------------------------------------------------------
    end = clock();
    result = (double)(end - start);
    printf("\ntime: %f",result);


    return 0;
}
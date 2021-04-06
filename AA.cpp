// 25.말아톤
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
    int n,i,cnt,j;


    scanf("%d",&n);
    vector<int> a(n+1);


    for (i = 1; i <= n; i++){
        scanf("%d",&a[i]);
    }

    for(i = 1; i <= n ; i++){
        cnt = 1;
        for (j = i-1; j >= 1; j--){

            if(a[i] <= a[j] ){
                cnt++;
            }
        }
        printf("%d ",cnt);
    }






    end = clock();
    result = (double)(end - start);

    // printf("\ntime: %f",result);

    return 0;
}
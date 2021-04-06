//22. 온도의 최대값
#include <stdio.h>

using namespace std;
int a[1000001];

int main(){
    // freopen("input.txt", "rt", stdin);

    int n, k ,i,j;
    int max = -2147000000,sum = 0;



    scanf("%d %d",&n,&k);

    for( i = 1; i <= n; i++){
        scanf("%d", &a[i]);
    }

    for( i = 1; i <= k ; i++){
        sum+=a[i];
    }


    for (i = k + 1; i <= n ; i ++){
        sum = sum - a[i-k] + a[i];
        if (sum > max){
            max = sum;
        }

    }

    printf("%d",max);


    return 0;
}
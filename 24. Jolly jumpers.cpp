// 24. Jolly Jumpers
#include <stdio.h>

using namespace std;

int a[101];
int b[101];

int main(){
    // freopen("input.txt", "rt", stdin);

    int n,i, sum;
    int flag = true;

    scanf("%d",&n);

    for ( i = 1; i <= n; i++){
        scanf("%d",&a[i]);
    }

    for( i = 1; i < n; i++){
        sum = a[i]-a[i+1];

        if (sum < 0){
            sum = -sum;
        }

        if (sum >=1 && sum <=n-1){
            b[sum] = 1;
        }

    }

    for(i = 1; i <= n - 1; i++){
        if(b[i] != 1){
            // printf("%d: %d",i,b[i]);
            flag = false;
            break;
        }
    }

    if (flag == true){
        printf("YES");
    }
    else printf("NO");



    return 0;
}
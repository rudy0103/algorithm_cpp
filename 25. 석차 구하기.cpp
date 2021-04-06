//25.석차구하기
#include <stdio.h>
#include <algorithm>
#include <vector>


using namespace std;

int main(){
    // freopen("input.txt", "rt", stdin);
    int n ,i,j;
    int tmp;
    int a[101] = { 0 };
    int b[101] = { 0 };

    scanf("%d",&n);

    for (i = 1; i <= n; i++){
        scanf("%d",&a[i]);
    }

    for(i = 1; i <= n ;i++){
        b[i]++;
        for(j = 1; j <= n; j++){
            if(a[i] > a[j]){
                b[j]++;
            }
            

        }

        
    }

    for(i = 1; i <=n ; i++){
        printf("%d ",b[i]);
    }


    return 0;
}
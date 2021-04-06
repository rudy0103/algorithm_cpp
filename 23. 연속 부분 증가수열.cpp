// 23. 연속 부분 증가수열
#include <stdio.h>

using namespace std;

int main(){
    // freopen("input.txt", "rt", stdin);
    int n , k,i, max = 0, tmp = 0, cnt = 0;


    scanf("%d",&n);

    for (i = 1 ; i <= n ; i++){
        scanf("%d",&k);
        if ( k >= tmp){
            cnt ++;
        }else{
            cnt = 1;
        }
        tmp = k;

        if (cnt >= max){
            max = cnt;
        }
    }

    printf("%d",max);


    return 0;
}
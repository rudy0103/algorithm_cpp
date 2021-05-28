// 17. 선생님 퀴즈
#include <stdio.h>

using namespace std;

int main(){
    // freopen("input.txt", "rt", stdin);
    int n, a, b;
    int sum = 0;

    scanf("%d",&n);

    for (int i = 1 ; i <=n; i++ ){
        scanf("%d",&a);
        scanf("%d",&b);
        sum = ((1+a)*a)/2;

        if(sum == b){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }


    return 0;
}
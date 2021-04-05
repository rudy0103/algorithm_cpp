#include <stdio.h>

using namespace std;

int main(){
    freopen("input.txt", "rt", stdin);

    int n,m,i,tmp;
    int s=0, max=0;

    scanf("%d %d",&n,&m);

    for (i = 1; i <= n ; i++){
        scanf("%d",&tmp);

        if(tmp > m){
            s++;
        }else{
            if(s > max){
                max = s;
            }
            s=0;
        }
    }

    if(s > max){
        max = s;
    }

    if (max == 0){
        printf("-1\n");
    }else{
        printf("%d",max);
    }



    return 0;
}
//11. 숫자의 총 개수(small)

#include<stdio.h>
#include<math.h>

int main(void){

    int n,i, cnt,total=0 ;

    scanf("%d",&n);

    cnt = 5;

    for(i = 10000; i >= 1 ; i = i/10){
        if ((n / i) >= 1){
            break;
        }
        cnt--;

    }

    total = n - i + 1;

    total = total*cnt;
    cnt--;

    for (int j = cnt; j >=1 ; j--){
        total= total + ((pow(10,j) - pow(10,j-1)))*j;

    }

    printf("%d",total);








    return 0;
}
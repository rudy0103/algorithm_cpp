// 41.연속된 자연수의 합

#include <stdio.h>
#include <time.h>

using namespace std;

int main(){
    clock_t start, end;
    double result;
    start = clock();
    // freopen("input.txt", "rt", stdin);
    //----------------------------------------------------------------------------------------------------------
    int n;
    int i,j,k,sum,cnt;

    scanf("%d",&n);
    cnt = 0;
    for(i = 2; (1+i)*i<=2*n;i++){
        for(j = 1 ; j <= n/2+1 ;j++){
            sum=0;
            for(k = 0 ; k<i ;k++){
                sum=sum+(j+k);
            }
            if(sum == n){
                cnt++;
                for(k = 0 ; k<i ;k++){
                if(k != i-1){
                    printf("%d + ",j+k);
                }
                else printf("%d = %d\n",j+k,sum);
            }
                
            }
        }

    }

    printf("%d",cnt);



    //------------------------------------------------------------------------------------------------------------
    // end = clock();
    // result = (double)(end - start);
    // printf("\ntime: %f",result);


    return 0;
}
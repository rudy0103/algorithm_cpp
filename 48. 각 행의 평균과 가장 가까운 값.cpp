//48. 각 행의 평균과 가장 가까운 값

#include <stdio.h>
#include <time.h>
#include <math.h>


using namespace std;

int main(){
    clock_t start, end;
    double result;
    start = clock();
    // freopen("input.txt", "rt", stdin);
    //----------------------------------------------------------------------------------------------------------
    int i ,j ,sum,avr,dist=0 ,max,tmp;
    int a[9][9];
    
    for(i = 0 ; i < 9 ; i++){
        sum=0;
        for(j = 0; j < 9; j++){
            scanf("%d",&a[i][j]);
            sum+=a[i][j];
        }
        avr = floor(((double)sum / 9)+0.5);

        dist = 99999;
        max = 0;
        for(j = 0; j <9 ; j++){
            if(abs(a[i][j]-avr)<dist){
                dist=abs(a[i][j]-avr);
                max=a[i][j];
            }
            if(abs(a[i][j]-avr)==dist){
                if(a[i][j] > max){
                    max=a[i][j];
                }
            }
        }

        printf("%d %d\n",avr,max);

    }




    //------------------------------------------------------------------------------------------------------------
    // end = clock();
    // result = (double)(end - start);
    // printf("\ntime: %f",result);


    return 0;
}
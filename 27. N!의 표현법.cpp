// 27. N!의 표현법

#include <stdio.h>
#include <algorithm>
#include <vector>
#include <time.h>

using namespace std;

int a[1001];
int b[1001];

int main(){
    // clock_t start, end;
    // double result;
    // start = clock();
    // freopen("input.txt", "rt", stdin);
    //----------------------------------------------------------------------------------------------------------
    int n,i,j,k,flag,tmp;
    scanf("%d",&n);
    k =1;

    for (i = 2; i <= n ; i++){
        flag = 1;
        for( j = 2; j*j<=i;j++){
            if( i %j == 0){
                flag = 0;
                break;
            }

        }
        if (flag == 1){
            a[i]= 1;
            b[k] = i;
            k++;
        }

    }

    for(i = 2; i <=n; i++){
        if(a[i] == 0){
            j= 1;
            tmp = i;
            while( b[j]<=tmp ){
                if(tmp % b[j] == 0){
                    tmp = tmp/b[j];
                    a[b[j]]++;
                }
                else{
                    j++;
                }
            }
        }
    }
    printf("%d! = ",n);

    for( i = 2 ; i <= n ; i++){
        if(a[i]!= 0){
            printf("%d ",a[i]);
        }
    }



    //------------------------------------------------------------------------------------------------------------
    // end = clock();
    // result = (double)(end - start);
    // printf("\ntime: %f",result);


    return 0;
}
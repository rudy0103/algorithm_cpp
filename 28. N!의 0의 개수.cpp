// 28. N!에서 0의 개수

#include <stdio.h>
#include <algorithm>
#include <vector>
#include <time.h>

using namespace std;

int main(){
    // clock_t start, end;
    // double result;
    // start = clock();
    // freopen("input.txt", "rt", stdin);
    //----------------------------------------------------------------------------------------------------------
    int n, i , j, cnt , tmp;
    int a[1001] = { 0 };
    int b[6] = {0};

    scanf("%d",&n);

    for( i =2 ; i <= n ; i++){
        tmp = i;
        while(tmp != 1){
            if( tmp % 2 == 0){
                b[2]++;
                tmp /= 2;
            }else if(tmp % 5 == 0){
                b[5]++;
                tmp /=5;
            }else{
                tmp = 1;
            }
        }
    }

    if(b[2] >= b[5]){
        printf("%d",b[5]);
    }
    else{
        printf("%d",b[2]);
    }



    //------------------------------------------------------------------------------------------------------------
    // printf("\ntime: %f",result);


    return 0;
}
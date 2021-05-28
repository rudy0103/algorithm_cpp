//29. 3의 개수는?(small)

#include <stdio.h>
#include <algorithm>
#include <vector>
#include <time.h>

using namespace std;

int main(){
    // clock_t start, end;
    // double result;
    // start = clock();
    freopen("input.txt", "rt", stdin);
    //----------------------------------------------------------------------------------------------------------
    int i, res = 0, cnt, tmp;
    int n;

    scanf("%d",&n);

    for(i = 1; i <= n ; i++){

        tmp = i;
        while( tmp >=1 ){

            if(tmp%10 == 3){
                res++;
            }
            tmp /= 10;
            
        }
        
    }

    printf("%d",res);



    //------------------------------------------------------------------------------------------------------------
    // end = clock();
    // result = (double)(end - start);
    // printf("\ntime: %f",result);


    return 0;
}
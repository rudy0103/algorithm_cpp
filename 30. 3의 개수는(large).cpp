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
    // freopen("input.txt", "rt", stdin);
    //----------------------------------------------------------------------------------------------------------
    int i, res = 0, cnt, k;
    int n;
    int left, cur, right;
    
    scanf("%d",&n);

    k = 1;
    left=n;

    while(left != 0){
        left = n/(k*10);
        cur = (n - (left*k*10)) / k;
        right = n % k;
        

        if(cur > 3){
            res+=(left + 1 )*k;

        }else if (cur == 3){
            res += (left * k) + (right+1);
        }else{
            res += left*k;
        }

        k=k*10;

    }










    printf("%d",res);



    //------------------------------------------------------------------------------------------------------------
    // end = clock();
    // result = (double)(end - start);
    // printf("\ntime: %f",result);


    return 0;
}
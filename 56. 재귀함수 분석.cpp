// 56. 재귀함수 분석

#include <stdio.h>
#include <time.h>

void funtion(int n){

    if(n==0) return;
    else{
        funtion(n-1);
        printf("%d ",n);
    }
}

using namespace std;

int main(){
    clock_t start, end;
    double result;
    start = clock();
    freopen("input.txt", "rt", stdin);
    //----------------------------------------------------------------------------------------------------------
    int n;
    scanf("%d",&n);
    funtion(n);


    //------------------------------------------------------------------------------------------------------------
    // end = clock();
    // result = (double)(end - start);
    // printf("\ntime: %f",result);


    return 0;
}
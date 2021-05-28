// 57. 재귀함수 이진수 출력

#include <stdio.h>
#include <time.h>

using namespace std;

void D(int n){
    if( n / 2 < 1) {
        printf("%d",n);
        return;
    }
    else{
        D(n/2);
        printf("%d",n%2);
    }


}

int main(){
    clock_t start, end;
    double result;
    start = clock();
    // freopen("input.txt", "rt", stdin);
    //----------------------------------------------------------------------------------------------------------
    int n;
    scanf("%d",&n);

    D(n);


    //------------------------------------------------------------------------------------------------------------
    // end = clock();
    // result = (double)(end - start);
    // printf("\ntime: %f",result);


    return 0;
}
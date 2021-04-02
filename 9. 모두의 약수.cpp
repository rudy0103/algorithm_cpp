#include <stdio.h>

using namespace std;

// num 배열은 main 밖과 main 안에 둘다 변수로 할당할 수 있지만
// main안에서 선언하는 경우 초기값이 0이라는것을 보장받지 못함
// 또한, 10만개 이상의 배열을 선언할 때는 지역변수로 스택에 할당하기엔 너무 큼 
// 즉 10만 이상 크기의 배열은 전역함수로 해야함 

int main(){
    // freopen("input.txt", "rt", stdin);
    int n,i,j,cnt;
    
    int num[50001] = {0};

    scanf("%d", &n);


    for( i = 1 ; i <= n; i ++){
        
        for (j = i ; j <= n ; j=j+i){
            num[j]++;
        }
    }

    for ( i = 1 ; i <= n ; i++) printf("%d ",num[i]);



    return 0;
}
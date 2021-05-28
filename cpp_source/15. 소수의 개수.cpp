// 15. 소수의 개수
#include <iostream>

using namespace std;

int arr[200001];

int main(){
    // freopen("input.txt", "rt", stdin);
    int n ,i,j, cnt = 1;
    bool flag = true;

    scanf("%d",&n);

    for( i = 2 ; i <= n; i++){
    
        for (j = i ; j <= n ; j=j+i)
        {
            arr[j]++;
        }
    }


    for (i = 3; i <= n ; i=i+1){
        if (arr[i] == 1){
            cnt++;
        }
        // printf("%d %d\n",i,arr[i]);
    } 

    printf("%d",cnt);







    return 0;
}
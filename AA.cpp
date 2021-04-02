#include <iostream>

using namespace std;

int digit_sum(int x){
    int sum = 0;
    int y = x;

    for (int i = 10000000; i >= 10; i = i/10){
        sum = sum + (int) (y /i);
        y=y-((int)(x / i))*i;
    }



    return sum;
}

int main(){
    freopen("input.txt", "rt", stdin);
    int n, i,tmp, sum, pos=0, max = 0;
    int a[101] = { 0 };
    int d[101] = { 0 };

    scanf("%d",&n);

    for (i = 1 ; i <= n ; i++){
        scanf("%d",&a[i]);
        sum = digit_sum(a[i]);
        printf("%d ",sum);
        if (sum >= max && a[i] > a[pos]){
            pos = i;
        }

    }

    // printf("%d",pos);
    // printf("%d",a[pos]);
        



    return 0;
}
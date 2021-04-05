#include <iostream>

using namespace std;

int digit_sum(int x) {
    int sum = 0;
    int y = x;

    for (int i = 10000000; i >= 1; i = i / 10) {
        sum = sum + (int)(y / i);
        y = y - ((int)(y / i)) * i;
    }

    return sum;
}

int main() {
    // freopen("input.txt", "rt", stdin);
    int n, i, sum, pos = 1, max;
    int a[101] = { 0 };

    scanf("%d", &n);
    max = a[pos];

    for (i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
        sum = digit_sum(a[i]);

        if (sum >= max) {
            
            if (sum > max){
                pos = i;
            }else{
                if(a[i] > a[pos]){
                    pos = i;
                }
            }


            max = sum;
            
        }

    }



    printf("%d ",a[pos]);




    return 0;
}
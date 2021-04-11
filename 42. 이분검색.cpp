// 42. 이분검색
#include <stdio.h>
#include <time.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    clock_t start, end;
    double result;
    start = clock();
    // freopen("input.txt", "rt", stdin);
    //----------------------------------------------------------------------------------------------------------
    int n,m;
    int i, idx, left,right;
    scanf("%d %d",&n,&m);
    vector<int> a(n);

    for (i = 0 ; i < n ; i++){
        scanf("%d",&a[i]);
    }
    sort(a.begin(), a.end());
    left = 0;
    right = n-1;
    idx = (left+right)/2;
    while(1){
        if(a[idx]==m){
            printf("%d",idx+1);
            break;
        }else if(a[idx]>m){
            right = idx;
            idx = (left+right)/2;
        }
        else{
            left = idx;
            idx = (left+right)/2;
        }
    }





    //------------------------------------------------------------------------------------------------------------
    // end = clock();
    // result = (double)(end - start);
    // printf("\ntime: %f",result);


    return 0;
}
// 44. 마구간 정하기(이분검색 응용)
#include <stdio.h>
#include <time.h>
#include <vector>
#include <algorithm>
using namespace std;

bool check_distance(vector<int> a,int mid ,int n ,int c){
    int i,j, cnt;
    int distance = mid;

    cnt = 1;
    j = 0;
    for(i = 1 ; i< n; i++){
        if(a[i]-a[j] >= distance){
            j = i;
            cnt ++;
        }

    }
    if (cnt >= c){
        return true;
    }else return false;

}


int main(){
    clock_t start, end;
    double result;
    start = clock();
    // freopen("input.txt", "rt", stdin);
    //----------------------------------------------------------------------------------------------------------
    int n, c;
    int i, j, left, right, mid,max, res;
    scanf("%d %d",&n,&c);
    vector<int> a(n);
    for(i = 0 ; i< n ; i++){
        scanf("%d",&a[i]);
    }
    sort(a.begin(),a.end());
    max = a[n-1] - a[0];
    left = 0;
    right = max;
    while(left<=right){
        mid = (left+right)/2;
        
        if(check_distance(a,mid,n,c)){
            res = mid;
            left=mid+1;

        }else{
            right=mid-1;

        }
    }

    printf("%d",res);




    //------------------------------------------------------------------------------------------------------------
    // end = clock();
    // result = (double)(end - start);
    // printf("\ntime: %f",result);


    return 0;
}
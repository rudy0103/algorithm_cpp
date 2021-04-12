// 45. 공주 구하기

#include <stdio.h>
#include <time.h>

using namespace std;

int main(){
    clock_t start, end;
    double result;
    start = clock();
    // freopen("input.txt", "rt", stdin);
    //----------------------------------------------------------------------------------------------------------
    int n,k,p;
    int i;
    int a[1001] = { 0 };
    int cnt;
    scanf("%d %d",&n,&k);

    cnt = k;
    p=n;
    while (p!=1)
    {

        for(i = 1; i<=n; i++){
            if(a[i] == 0){
                cnt--;
            }
            if(cnt==0 && a[i]==0){
                a[i]=1;
                cnt=k;
                p--;
                if(p==1) break;
            }
        }

    }
    
    for(i = 1; i<=n; i++){
        if(a[i]==0){
            printf("%d",i);
        }
    }


    //------------------------------------------------------------------------------------------------------------
    // end = clock();
    // result = (double)(end - start);
    // printf("\ntime: %f",result);


    return 0;
}
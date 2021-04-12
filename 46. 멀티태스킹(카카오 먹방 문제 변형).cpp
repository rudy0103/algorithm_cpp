//46. 멀티태스킹(카카오 먹방 문제 변형)

#include <stdio.h>
#include <time.h>
#include <vector>

using namespace std;

int main(){
    clock_t start, end;
    double result;
    start = clock();
    // freopen("input.txt", "rt", stdin);
    //----------------------------------------------------------------------------------------------------------
    int n, s;
    int i, pos,sum=0;
    scanf("%d",&n);
    int a[2001];

    for(i = 1; i <= n; i++){
        scanf("%d",&a[i]);
        sum+=a[i];
    }

    scanf("%d",&s);

    if(s>=sum){
        printf("-1");
    }else{
        pos = 1;
        for( i = 1; i<= s; i++){
            while(a[pos]==0){
                pos++;
                if(pos>n) pos=1;
            }
            a[pos]--;
            pos++;
            if(pos>n) pos=1;
        }
        while (a[pos]==0)
        {
            pos++;
            if(pos>n) pos=1;
        }
        

        printf("%d",pos);
    }





    //------------------------------------------------------------------------------------------------------------
    // end = clock();
    // result = (double)(end - start);
    // printf("\ntime: %f",result);


    return 0;
}
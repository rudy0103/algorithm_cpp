//38. Inversion Sequence
#include <stdio.h>
#include <time.h>

using namespace std;

int main(){
    clock_t start, end;
    double result;
    start = clock();
    // freopen("input.txt", "rt", stdin);
    //----------------------------------------------------------------------------------------------------------
    int a[101]={ 0 };
    int b[101]={ 0 };
    int n,i,j,cnt;
    scanf("%d",&n);
    for(i = 1; i <= n ; i++){ //Inversion sequence
        scanf("%d",&a[i]);
        b[i]=101;
    }

    for( i = 1; i <=n ; i++){
        cnt=0;

        for(j = 1; j <=n; j++){
            if(b[j] > i){
                cnt++;
            }
            if(cnt>a[i] && b[j]==101){
                b[j] = i;
                break;
            }
        }
    }


    for(i = 1; i <=n; i++){
        printf("%d ",b[i]);
    }



    //------------------------------------------------------------------------------------------------------------
    // end = clock();
    // result = (double)(end - start);
    // printf("\ntime: %f",result);


    return 0;
}
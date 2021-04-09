//37. Least Recently Used(카카오 캐시 문제 변형)

#include <stdio.h>
#include <algorithm>
#include <vector>
#include <time.h>

using namespace std;

int main(){
    clock_t start, end;
    double result;
    start = clock();
    // freopen("input.txt", "rt", stdin);
    //----------------------------------------------------------------------------------------------------------
    int s ,n;
    int i,ii, j, k,job,flag;
    scanf("%d %d",&s,&n);
    vector<int> a(n);
    
    for(i = 0; i <n; i++){
        scanf("%d",&job);
        flag=0;
        for(j = 0 ; j < s; j++){
            if(a[j]==job){
                flag =1;  // 캐시에 job이 있나 없나
                break;
            }
        }
        
        if(flag ==1){ //캐시에 job이 있을 경우
            for(k=j-1; k>=0; k--){
                a[k+1]=a[k]; // job 앞부분을 한칸씩 뒤로 미룬다.
            }
            a[0] = job;// job을 맨 앞으로 옮긴다.
        }
        else{//캐시에 잡이 없을 경우
            for(k = n-2; k >=0; k--){//한칸씩 전부 뒤로 미룬다
                a[k+1]=a[k];
            }
            a[0] = job; // 맨 앞에 job을 추가한다.
        }
        // for(ii = 0 ;ii <s ;ii++){
        //     printf("%d ",a[ii]);
        // }
        // printf("\n");

    }

    for(i = 0 ;i <s ;i++){
        printf("%d ",a[i]);
    }

    //------------------------------------------------------------------------------------------------------------
    // end = clock();
    // result = (double)(end - start);
    // printf("\ntime: %f",result);


    return 0;
}
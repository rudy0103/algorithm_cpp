// 40. 교집합
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
    int n,m,min;
    int i,j,k,tmp,idx;
    int p1 = 0,p2 = 0,p3 = 0;

    scanf("%d",&n);
    vector<int> a(n);
    for(i = 0 ; i<n; i++){
        scanf("%d",&a[i]);
    }

    
    scanf("%d",&m);
    if(n<m) min = n;
    else min = m;

    vector<int> b(m), c(min);
    for(i = 0 ; i<m; i++){
        scanf("%d",&b[i]);
    }

    // k=0;
    // for(i = 0; i < n; i++){
    //     for(j = 0 ; j < m; j++){

    //         if(a[i]==b[j]){
    //             c[k]=a[i];
    //             k++;
    //         }
    //     }
    // }

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());


    while(1){
        if(a[p1] == b[p2]){
            c[p3++]=a[p1];
            p1++;
            p2++;
        }
        else if(a[p1] > b[p2]) p2++;
        else p1++;

        if(p1>=n || p2 >=m) break;
    }

    // for(i = 0; i < k ; i++){
    //     tmp=c[i];
    //     idx = i;
    //     for(j = i-1; j >=0; j--){
    //         if(c[j] > c[i]){
    //             idx = j;
    //         }
    //     }
    //     for(j = i-1; j>=idx;j--){
    //         c[j+1]=c[j];
    //     }
    //     c[idx]=tmp;

    // }
    
    
    for(i = 0 ; i < p3; i++){
        printf("%d ",c[i]);
    }

    


    



    //------------------------------------------------------------------------------------------------------------
    // end = clock();
    // result = (double)(end - start);
    // printf("\ntime: %f",result);


    return 0;
}
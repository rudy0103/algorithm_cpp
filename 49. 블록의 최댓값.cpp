// 49. 블록의 최댓값

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
    int n ,i,j ,k , total;

    scanf("%d",&n);
    vector<vector<int>> map(n,vector<int>(n,0));
    vector<int> front(n);
    vector<int> right(n);

    for(i = 0; i< n ;i++){
        scanf("%d",&front[i]);
    }
    
    for(i = 0; i< n ;i++){
        scanf("%d",&right[i]);
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < n ; j++){
            map[i][j]=front[j];
            // printf("%d ",map[i][j]);

        }
        // printf("\n");
    }
    total=0;
    for(i = 0; i < n; i++){
        for(j = 0; j < n ; j++){
           if(right[n-i-1]<map[i][j]){
               map[i][j]=right[n-i-1];

           }
            total+=map[i][j];
            // printf("%d ",map[i][j]);

        }
        // printf("\n");
    }
    printf("%d",total);




    //------------------------------------------------------------------------------------------------------------
    // end = clock();
    // result = (double)(end - start);
    // printf("\ntime: %f",result);


    return 0;
}
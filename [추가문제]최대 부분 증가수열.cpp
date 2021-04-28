// 최대 부분 증가수열

#include<iostream>
#include<time.h>

using namespace std;

int dy[1001];
int a[1001];

int main(){
    clock_t start, end;
    double result;
    start = clock();
    freopen("input.txt", "rt", stdin);
    //----------------------------------------------------------------------------------------------------------
    ios_base::sync_with_stdio(false);
    int i,j, n;
    cin>>n;
    int res=0;
    int max;

    for(i=1; i<=n; i++){
        cin>>a[i];
    }
    dy[1]=1;
    dy[2]=1;

    for(i=3; i <=n; i++){
        max=0;
        for(j=i;j>=1;j--){
            if(a[i]>a[j]){
                if(dy[j]>max){
                    max=dy[j];
                }

            }
        }
        dy[i]=max+1;
        if(dy[i]>res){
            res=dy[i];
        }
    }

    // for(i=1; i<=n; i++) cout<<dy[i]<<" ";

    cout<<res;
    //------------------------------------------------------------------------------------------------------------
    // end = clock();
    // result = (double)(end - start);
    // printf("\ntime: %f",result);


    return 0;
}
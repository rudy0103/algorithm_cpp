// 85. 수식만들기(삼성 SW역량평가 기출문제 DFS 활용)
#include<iostream>
#include<stdio.h>
#include<time.h>

using namespace std;

int n,num[11];
int op[5];
int res;
int maximum=-2147000000;
int minimum=2147000000;

void DFS(int l, int r){
    int i;

    if(l==n){
        if(r>maximum){
            maximum=r;
        }
        if(r<minimum){
            minimum=r;
        }
    }
    else{
        for(i=1;i<=4;i++){
            if(op[i]>0){
                op[i]--;
                if(i==1){
                    DFS(l+1,r+num[l+1]);
                }
                else if(i==2){
                    DFS(l+1,r-num[l+1]);
                }
                else if(i==3){
                    DFS(l+1,r*num[l+1]);
                }
                else if(i==4){
                    DFS(l+1,r/num[l+1]);
                }
                op[i]++;
            }
        }



    }

}

int main(){
    clock_t start, end;
    double result;
    start = clock();
    // freopen("input.txt", "rt", stdin);/
    //----------------------------------------------------------------------------------------------------------
    int i;
    cin>>n;

    for(i=1;i<=n;i++){
        cin>>num[i];
    }

    for(i=1;i<=4; i++){
        cin>>op[i];
    }
    res=num[1];
    DFS(1,num[1]);
    cout<<maximum<<endl;
    cout<<minimum<<endl;



    //------------------------------------------------------------------------------------------------------------
    // end = clock();
    // result = (double)(end - start);
    // printf("\ntime: %f",result);


    return 0;
}
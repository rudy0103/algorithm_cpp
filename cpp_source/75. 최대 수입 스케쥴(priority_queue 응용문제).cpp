// 75. 최대 수입 스케쥴(priority_queue 응용문제)

#include<stdio.h>
#include<time.h>
#include<queue>

using namespace std;

int main(){
    clock_t start, end;
    double result;
    start = clock();
    freopen("input.txt", "rt", stdin);
    //----------------------------------------------------------------------------------------------------------
    int n,m,d;
    int i,j,sum=0;
    int s[10001]={0};
    pair<int,int> p;
    priority_queue<pair<int,int>> pQ;

    scanf("%d",&n);

    for(i=0; i<n; i++){
        scanf("%d %d",&m,&d);
        p=make_pair(m,d);
        pQ.push(p);
    }

    for(i=0; i<n; i++){
        p=pQ.top();
        pQ.pop();
        if(s[p.second]==0){
            s[p.second]=p.first;
        }
        else{
            for(j=p.second; j>=1; j--){
                if(s[j]==0){
                    s[j]=p.first;
                    break;
                }
            }
        }
    }

    for(i=1;s[i]!=0;i++){
        sum+=s[i];
    }

    printf("%d",sum);




    //------------------------------------------------------------------------------------------------------------
    // end = clock();
    // result = (double)(end - start);
    // printf("\ntime: %f",result);


    return 0;
}
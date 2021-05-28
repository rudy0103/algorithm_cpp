// 84. 휴가(삼성 SW역량평가 기출문제 DFS활용)

#include<stdio.h>
#include<time.h>
#include<vector>

using namespace std;

int maximum;
int total;
int day[16];
vector<pair<int,int>> map(16);
int n;

void DFS(int a){
    int i;
    int b,c;


    if(a>n || map[a].first+a>n+1){
        return;
    }else{
        total+=map[a].second;    
        if(total>=maximum){
            maximum=total;
        }
        for(i=a+map[a].first; i<=n; i++){
            DFS(i);
        }
        total-=map[a].second;


    }

}

int main(){
    clock_t start, end;
    double result;
    start = clock();
    // freopen("input.txt", "rt", stdin);
    //----------------------------------------------------------------------------------------------------------
    int i;
    int t,p;
    scanf("%d",&n);

    for( i = 1; i<=n ;i++){
        scanf("%d %d",&t,&p);
        map[i]=make_pair(t,p);
    }

    map[0]=(make_pair(1,0));

    DFS(0);
    printf("%d",maximum);

    //------------------------------------------------------------------------------------------------------------
    // end = clock();
    // result = (double)(end - start);
    // printf("\ntime: %f",result);


    return 0;
}
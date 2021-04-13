//61. 특정 수 만들지(DFS: MS 인터뷰)

#include<stdio.h>

int n;
int m;
int cnt;
int a[11];
int sum=0;

void DFS(int L, int sum){

    if(L == n+1){
        if (sum == m){
            cnt++;
        }
    }else{

        DFS(L+1,sum+a[L]);
        DFS(L+1,sum);
        DFS(L+1,sum-a[L]);
    }

}

int main(){

    // freopen("input.txt", "rt", stdin);
    scanf("%d %d",&n,&m);

    for(int i = 1; i<= n; i++){
        scanf("%d",&a[i]);
    }

    DFS(1,0);
    
    if(cnt !=0) printf("%d",cnt);
    else printf("-1");





    return 0;
}
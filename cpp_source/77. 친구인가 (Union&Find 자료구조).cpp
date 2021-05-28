// 77. 친구인가 (Union&Find 자료구조)

#include<stdio.h>
#include<time.h>
#include<iostream>

using namespace std;
int unf[1001];

int Find(int v){
    if(v==unf[v]) return v;
    else return Find(unf[v]);
}

void Union(int a, int b){
    a=Find(a);
    b=Find(b);
    if(a!=b) unf[a]=b;
}

int main(){
    clock_t start, end;
    double result;
    start = clock();
    // freopen("input.txt", "rt", stdin);
    //----------------------------------------------------------------------------------------------------------
    int n, m ,a, b;
    cin >>n>>m;

    for(int i = 1; i<=n; i++){
        unf[i]=i;
    }

    for(int i = 1; i<=m;i++){
        cin>>a>>b;
        Union(a,b);
    }

    cin>>a>>b;
    a=Find(a);
    b=Find(b);

    if(a==b) printf("YES");
    else printf("NO");

    //------------------------------------------------------------------------------------------------------------
    // end = clock();
    // result = (double)(end - start);
    // printf("\ntime: %f",result);


    return 0;
}
//DP 네트워크 선 자르기 (Top-Down 재귀, 메모이제이션)
#include<stdio.h>
#include<time.h>
#include<iostream>

using namespace std;

int dy[50];


int DFS(int n){
    int res;

    if(n==1 || n==2 ) return n;
    else if(dy[n]!=0) {
        return dy[n];
    }
    else{
        res=DFS(n-1)+DFS(n-2);
        dy[n]=res;
        return res;
    }



}

int main(){
    clock_t start, end;
    double result;
    start = clock();
    // freopen("input.txt", "rt", stdin);
    //----------------------------------------------------------------------------------------------------------
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    int i;

    cout<<DFS(n);




    //------------------------------------------------------------------------------------------------------------
    // end = clock();
    // result = (double)(end - start);
    // printf("\ntime: %f",result);


    return 0;
}
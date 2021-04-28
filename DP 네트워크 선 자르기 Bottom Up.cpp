//DP 네트워크 선 자르기 Bottom Up
#include<stdio.h>
#include<time.h>
#include<iostream>

using namespace std;

int dy[50];

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
    dy[1]=1;
    dy[2]=2;

    for(i=3; i<=n ; i++){
        dy[i]=dy[i-1]+dy[i-2];
    }

    cout<<dy[n];




    //------------------------------------------------------------------------------------------------------------
    // end = clock();
    // result = (double)(end - start);
    // printf("\ntime: %f",result);


    return 0;
}
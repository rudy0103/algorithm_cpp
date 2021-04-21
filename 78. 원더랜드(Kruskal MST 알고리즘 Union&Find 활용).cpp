//78. 원더랜드(Kruskal MST 알고리즘 Union&Find 활용)

#include<stdio.h>
#include<time.h>
#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>

using namespace std;
int unf[26];
int total=0;

struct Data{
    int x;
    int y;
    int z;
    Data(int a, int b, int c){
        x=a;
        y=b;
        z=c;
    }
    bool operator<(Data &b){
        return z<b.z;
    }
};

int Find(int v){
    if(v==unf[v]) return v;
    else return Find(unf[v]);
}

void Union(int a, int b,int c){
    a=Find(a);
    b=Find(b);
    if(a!=b) {
        unf[a]=b;
        total+=c;
    }
}

int main(){
    clock_t start, end;
    double result;
    start = clock();
    // freopen("input.txt", "rt", stdin);
    //----------------------------------------------------------------------------------------------------------
    int v,e;
    int i,j;
    int a,b,c;
    cin>>v>>e;
    vector<Data> vec;

    for(i = 1; i<=v ; i++){
        unf[i]=i;
    }

    for(i = 1; i<=e; i++){
        cin>>a>>b>>c;
        vec.push_back(Data(a,b,c));
    }

    sort(vec.begin(),vec.end()); //비용이 가장 낮은것부터 오름차순 정렬
    
    // for(i=0; i<e; i++){
    //     printf("%d %d %d\n",vec[i].x,vec[i].y,vec[i].z);
    // }
    for(i=0; i<e; i++){
        Union(vec[i].x,vec[i].y,vec[i].z);
    }
    
    printf("%d",total);



    //------------------------------------------------------------------------------------------------------------
    // end = clock();
    // result = (double)(end - start);
    // printf("\ntime: %f",result);


    return 0;
}
//86. 피자 배달 거리(삼성 SW역량평가 기출문제 DFS활용)
#include<iostream>
#include<stdio.h>
#include<time.h>
#include<vector>
#include<math.h>

using namespace std;
int n,m;
int mininum=2147000000;

vector<pair<int,int>> pizza;
vector<pair<int,int>> house;
vector<pair<int,int>> m_pizza(13);

void DFS(int s, int L){
    int i,j;
    int min_dist,sum,dist;
    if(L==m){
        sum=0;
        for(i=0;i<house.size();i++){
            min_dist=2147000000;
            for( j = 0; j<L; j++){
                dist=abs(house[i].first-m_pizza[j].first)+ 
                abs(house[i].second-m_pizza[j].second);
                if(dist<min_dist){
                    min_dist=dist;
                }
            }
            sum+=min_dist;
        }
        if(sum<mininum){
            mininum=sum;
        }
    }
    else{
        for( i = s; i<pizza.size(); i++){
            m_pizza[L]=pizza[i];
            DFS(i+1,L+1);
        }
    }

}

int main(){
    clock_t start, end;
    double result;
    start = clock();
    freopen("input.txt", "rt", stdin);
    //----------------------------------------------------------------------------------------------------------
    int i,j;
    int tmp;
    cin>>n>>m;

    for(i=1;i<=n;i++){
        for(j = 1; j<=n; j++){
            cin>>tmp;
            if(tmp==1) house.push_back(make_pair(i,j));
            else if(tmp == 2) pizza.push_back(make_pair(i,j));
        }
    }

    DFS(0,0);
    cout<<mininum;


    //------------------------------------------------------------------------------------------------------------
    // end = clock();
    // result = (double)(end - start);
    // printf("\ntime: %f",result);


    return 0;
}
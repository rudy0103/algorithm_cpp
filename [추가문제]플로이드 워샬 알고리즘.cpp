//플로이드 워샬 알고리즘

//프롤이드 워샬 - 그래프에서 모든 노드에서 다른 모든 노드로 가는 알고리즘

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int n,m;


int main(){

    ios_base::sync_with_stdio(false);
    // freopen("input.txt","rt",stdin);
    int i,j;
    int s,d,c;


    cin>>n>>m;
    vector<vector<int>> dis(n+1, vector<int>(n+1,5000));

    for(i=0;i<m;i++){
        cin>>s>>d>>c;
        dis[s][d]=c;
    }
    
    for(i=1;i<=n;i++){
        dis[i][i]=0;
    }

    for(int k = 1; k<=n; k++){
        for(i = 1; i<=n; i++){
            for(j = 1; j<=n; j++){
                if(dis[i][j]>dis[i][k] + dis[k][j]){
                    dis[i][j]=dis[i][k]+dis[k][j];
                }
            }
        }
    }

    for(i =1; i<=n; i++){
        for(j=1; j<=n; j++){
            if(dis[i][j]>=5000){
                cout<<"M ";
            }
            else cout<<dis[i][j]<<" ";
        }
        cout<<endl;
    }




    return 0;
}
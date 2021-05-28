//회장뽑기 플로이드 워샬 알고리즘 응용

//프롤이드 워샬 - 그래프에서 모든 노드에서 다른 모든 노드로 가는 알고리즘

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;


int main(){

    ios_base::sync_with_stdio(false);
    // freopen("input.txt","rt",stdin);
    int n,i,j,k;
    int a,b;
    int score=9999;
    int cnt=0;

    cin>>n;
    int candi[51]={0};
    vector<vector<int>> dis(n+1,vector<int>(n+1,5000));

    for(i=1;i<=n;i++) dis[i][i]=0;


    while (true)
    {
        cin>>a>>b;
        if(a==-1 && b==-1) break;
        dis[a][b]=1;
        dis[b][a]=1;
    }
    
    
    for(k=1;k<=n;k++){
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                if(dis[i][j]>dis[i][k]+dis[k][j]){
                    dis[i][j]=dis[i][k]+dis[k][j];
                }
            }
        }
    }



    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(candi[i] < dis[i][j]) candi[i]=dis[i][j];
            
        }
        if(score>candi[i]) score=candi[i];
    }

    for(i=1;i<=n;i++){
        if(candi[i]==score) cnt++;
    }
    cout<<score<<" " <<cnt<<endl;
    
    for(i=1;i<=n;i++){
        if(candi[i]==score) cout<<i<<" ";
    }
    cout<<endl;



    return 0;
}
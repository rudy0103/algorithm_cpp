//가방문제(냅색 알고리즘)

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int main(){

    ios_base::sync_with_stdio(false);
    freopen("input.txt", "rt", stdin);
    int i,j,n;
    int w,v;
    int m;
    cin>>n>>m;
    
    vector<int> dy(m+1,0);

    for(int i = 0 ;i<n;i++){
        cin>>w>>v;
        for(int j = w; j<=m; j++){
            dy[j]=max(dy[j],dy[j-w]+v);
        }
    }

    cout<<dy[m];


    return 0;
}
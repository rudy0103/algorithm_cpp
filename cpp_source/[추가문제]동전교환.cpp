//동전교환

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int dy[1001];



int main(){

    ios_base::sync_with_stdio(false);
    // freopen("input.txt", "rt", stdin);
    int n,m;
    int i,j;
    int v;
    int a[13]={0};
    cin>>n;

    for(i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(a+1,a+n+1);

    cin>>m;
    
    for(i=1;i<=m;i++) dy[i]=9999;
    for(i=1;i<=n;i++){
        for(j=a[i];j<=m;j++){
            if(dy[j] >dy[j-a[i]] + 1) dy[j]=dy[j-a[i]]+1;
        }
    }
   
    
    cout<<dy[m];
    

    return 0;
}
//19. 분노유발자

#include <stdio.h>

using namespace std;

int main(){
    // freopen("input.txt", "rt", stdin);
    int n,cnt = 0 ,i,j;
    int a[101]={0};
    bool flag;
    scanf("%d",&n);
    
    for(i = 1; i <= n; i++){
        scanf("%d",&a[i]);
    }


    for(i = 1 ; i <= n-1; i++){
        flag = true;
        for(j = i+1; j <= n; j++){
            if (a[i] <= a[j]){
                flag = false;
            }
        }

        if(flag==true){
            cnt++;
        }
    }

    printf("%d",cnt);

    



    return 0;
}
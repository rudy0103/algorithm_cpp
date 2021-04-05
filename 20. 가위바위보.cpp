#include <stdio.h>

using namespace std;

int main(){
    // freopen("input.txt", "rt", stdin);
    int a[101] = {0};
    int b[101] = {0};
    int i,j,n;

    scanf("%d",&n);

    for (i = 1 ; i <=n ; i++){
        scanf("%d",&a[i]);
    }
    
    for (i = 1 ; i <=n ; i++){
        scanf("%d",&b[i]);
    }

    for(i = 1 ; i <= n ; i++){
        if (a[i] == b[i]){
            printf("D\n");
        }
        else{
            if(a[i] == 1){
                if(b[i] == 2) printf("B\n");
                else printf("A\n");
            }
            else if (a[i] == 2){
                if(b[i]==3) printf("B\n");
                else printf("A\n");

            }else{
                if(b[i] == 1) printf("B\n");
                else printf("A\n");
            }
        }
    }


    return 0;
}
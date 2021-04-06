//21. 카드게임
#include <stdio.h>

using namespace std;

int main(){
    // freopen("input.txt", "rt", stdin);
    int i;
    int a[10], b[10];
    int s_a = 0, s_b = 0;
    char last_win = 'c';


    for (i = 0 ; i < 10; i++){
        scanf("%d",&a[i]);
    }
    
    for (i = 0 ; i < 10; i++){
        scanf("%d",&b[i]);
    }

    for(i = 0; i < 10; i++){
        if(a[i] == b[i]){
            s_a++;
            s_b++;
        }else if (a[i] > b[i]){
            s_a = s_a+3;
            last_win = 'a';

        }else{
            s_b = s_b+3;
            last_win = 'b';
        }
    }

    printf("%d %d\n",s_a,s_b);

    if( s_a == s_b){
        if(s_a == 10) printf("D");
        else if (last_win == 'a') printf("A");
        else printf("B");
    }
    else if (s_a > s_b) printf("A");
    else printf("B");


    return 0;
}
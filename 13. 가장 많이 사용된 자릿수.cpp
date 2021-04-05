//13. 가장 많이 사용된 자릿수

#include <iostream>

using namespace std;

int main(){
    // freopen("input.txt", "rt", stdin);
    char a[101];
    int num[10]={0},tmp,max=0,res;

    scanf("%s",&a);

    for(int i = 0; a[i] != '\0'; i ++){

        if(a[i] >= '0' && a[i] <= '9'){
            tmp = a[i] - 48;
            num[tmp]++;
        }

    }

    for (int i = 0 ; i <=9 ; i++){

        if(num[i]>=max){
            res=i;
            max=num[i];
        }
        
    }

    printf("%d",res);

    return 0;
}
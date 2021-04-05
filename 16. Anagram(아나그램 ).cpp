//16. Anagram(아나그램 : 구글 인터뷰 문제)

#include <stdio.h>

using namespace std;

int main(){
    // freopen("input.txt", "rt", stdin);
    char a[101];
    char b[101];
    int c[52] = {0};
    int cnt = 0;

    bool flag = true;

    int i,tmp;

    scanf("%s",&a);
    scanf("%s",&b);

    for(i = 0; a[i] != '\0'; i++){

        if( a[i] >= 'A' && a[i] <= 'Z'){
            tmp = a[i] -65;
            c[tmp]++;
        }else if( a[i] >= 'a' && a[i] <= 'z') {
            tmp = a[i] - 71;
            c[tmp]++;
        }
        cnt++;

    }

    
    for(i = 0; b[i] != '\0'; i++){

        if( b[i] >= 'A' && b[i] <= 'Z'){
            tmp = b[i] -65;
            c[tmp]--;
        }else if( b[i] >= 'a' && b[i] <= 'z') {
            tmp = b[i] - 71;
            c[tmp]--;
        }
        cnt--;

    }

    for (i = 0 ; i <= 51 ; i++){
        if ( c[i] != 0){
            flag = false;
        }
    }

    if (flag == true && cnt == 0){
        printf("YES");
    }else{
        printf("NO");
    }




    return 0;
}
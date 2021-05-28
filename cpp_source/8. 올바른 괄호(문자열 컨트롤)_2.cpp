#include <iostream>
#include <stdio.h>


using namespace std;

int main(){
    // freopen("input.txt", "rt", stdin);
    char a[31];
    bool b = true;
    int i = 0 , p = 0;
    int cnt_l = 0, cnt_r = 0;
    scanf("%s",&a);


    for (i = 0 ; a[i] != '\0'; i++){

        if (a[i] == '(') cnt_l++;
        else cnt_r++;

        if (cnt_r > cnt_l) {
            b = false;
            break;
            }
    }

    if (b && cnt_l == cnt_r) printf("YES");
    else printf("NO");







    return 0;
}
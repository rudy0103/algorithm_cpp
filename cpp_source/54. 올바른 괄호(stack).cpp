// 54. 올바른 괄호(stack)
#include <stdio.h>
#include <stack>

using namespace std;

int main(){
    // freopen("input.txt", "rt", stdin);

    char a[31];
    int i;
    bool check=false;

    stack<char>s;

    scanf("%s",&a);

    for (i = 0; a[i] != '\0'; i++){
        if(a[i] == '(') s.push(a[i]);
        else{
            if(s.empty()){
                printf("NO");
                check = true;
                break;
            }
            else{
                s.pop();
                }
        }

    }

    if(s.empty() && check == false){
        printf("YES");
    }
    else{
        if( check != true)
        printf("NO");
    }








    return 0;
}
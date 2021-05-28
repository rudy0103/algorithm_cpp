#include <iostream>
#include <string>


using namespace std;

int main(){
    // freopen("input.txt", "rt", stdin);
    
    
    string inp_str;

    int i=0, j = 0;
    getline(cin, inp_str);

    while (true){
        if ( inp_str[i] == '\0') break;

        else{
            

            if(inp_str[i] >= 'A' && inp_str[i] <= 'Z'){
                printf("%c",inp_str[i]+32);

            }
            else {
                if (inp_str[i] != ' '){
                    printf("%c", inp_str[i]);
                }
            }

            i++;
        }

    }




    return 0;
}
#include <iostream>
#include <string>

using namespace std;

int main(){
    // freopen("input.txt", "rt", stdin);
    char inp_str[50]="\0";
    char num_str[50]="\0";
    char num_str_extract_zero[50]="\0";
    int num;

    scanf("%s",&inp_str);

    int j = 0;

    for(int i = 0; inp_str[i] != '\0'; i++){
        
        if (inp_str[i] >= '0' && inp_str[i] <='9'){
            // printf("%c",inp_str[i]);
            num_str[j] = inp_str[i];
            j++;
        }

    }

    j =0;

    for( int i = 0; num_str[i] == '0'; i++){
         j++;
    }
    int k = 0;

    // printf("%d",j);
    for(int i = j; num_str[i] != '\0'; i++){
        num_str_extract_zero[k] = num_str[i];
        k++;
    }
    num = stoi(num_str_extract_zero);
    printf("%d\n",num);
    
    k = 1;

    for (int i = 1; i <= num/2; i++){
        if (num % i == 0) {k++;}
    }

    printf("%d", k);




    return 0;
}
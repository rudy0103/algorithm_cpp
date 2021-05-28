#include <iostream>
#include <string>

using namespace std;

int main(){
    // freopen("input.txt", "rt", stdin);
    int age, y, year = 2019;
    string in_str, gender, tmp;


    cin >> in_str;
    tmp = in_str.substr(0,2);
    y = stoi(tmp);


    if (in_str[7] == '1'){
        gender = "M";
        age = 1900 + y;
    }else if (in_str[7] == '2'){
        gender = "W";
        age = 1900 + y;

    }else if (in_str[7] == '3'){
        gender = "M";
        age = 2000 + y;

    }else if (in_str[7] == '4'){
        gender = "W";
        age = 2000 + y;

    }else{
        cout<< "잘못된 형식의 주민등록번호 입니다." <<endl;
    }

    cout << year - age + 1 <<" "<< gender;
    





    return 0;
}
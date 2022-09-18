#include <iostream>
using namespace std;

int main(){
    int age;
    bool eligible;

    cout <<"나이를 입력하세요 ";
    cin >> age;
    eligible=(age>=25) && (age<=100);

    if (eligible){
        cout <<"차를 빌릴 수 있습니다.";

    }   
    else{
        cout <<"차를 빌릴 수 없습니다.";
    }
    return 0;
}
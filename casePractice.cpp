#include <iostream>
using namespace std;

int main(){
    int day;
    cout <<"0~6까지 입력하세요: ";
    cin >> day;

    switch (day){
        case 0: cout <<"일"<< endl;
        break;
        case 1: cout <<"월"<< endl;
        break;
        case 2: cout <<"화"<< endl;
        break;
        case 3: cout <<"수"<< endl;
        break;
        case 4: cout <<"목"<< endl;
        break;
        case 5: cout <<"금"<< endl;
        break;
        case 6: cout <<"토"<< endl;
        
        default: cout <<"제대로 입력하세요.";
    }


}
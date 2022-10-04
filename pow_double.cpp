#include <iostream>
using namespace std;

int main(){
    int base;
    int exponent;
    int power=1;
    int counter=0;
    
    cout<<"밑을 입력하세요.: ";
    cin >>base;

    cout<<"지수를 입력하세요.:";
    cin >>exponent;
    while(counter < exponent){
        power*=base;
        counter+=1;
    }
    if (exponent==0){
        power =1;
    }

    
    cout <<base<<"의 "<<exponent<<"제곱 값은 "<<power<<"입니다.";
    return 0;


}
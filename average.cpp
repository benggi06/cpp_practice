#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int num1,num2,num3;
    cout <<"첫 번째 숫자를 입력하세요.: ";
    cin >>num1;
    cout <<"두 번째 숫자를 입력하세요.: ";
    cin >>num2;
    cout <<"세 번째 숫자를 입력하세요.: ";
    cin >>num3;
    
    double average=(num1+num2+num3)/3; //평균
    //편차의 제곱
    double dev1=pow(num1-average,2);
    double dev2=pow(num2-average,2);
    double dev3=pow(num3-average,2);            

    double var=(dev1+dev2+dev3)/3;
    cout <<"총합: "<<average*3<<endl;
    cout <<"평균: "<<average<<endl;
    cout <<"분산: "<<var;
    





}
#include <iostream>
using namespace std;

int main(){
    int time;
    cout<<"초를 입력해주세요 : ";
    cin >>time;
    int hour=time/3600;//시
    int min=(time%3600)/60;//분
    int sec=time%60;
    
    cout<<"입력 받은 초는 "<<time<<"입니다."<<endl;
    cout<<hour<<" 시"<<endl;
    cout<<min<<" 분"<<endl;
    cout<<sec<<" 초";




}
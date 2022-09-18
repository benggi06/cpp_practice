#include <iostream>
using namespace std;

int main(){
    int month,day;
    int newDay=0;
    
    cout<<"월을 입력하세요.: ";
    cin>>month;

    if (month >12 || month <1){//월을 잘못 입력할 때
        cout <<"월을 1부터 12까지만 입력하세요.!!"<<endl;
        return 0;
    }

    cout<<"날짜를 입력하세요.: ";
    cin>>day;

    if (day >31 || day <1){//일이 1보다 작거나 31을 초과할 때 
        cout <<"날짜를 1부터 31까지만 입력하세요!!"<<endl;
        return 0;
    }

    if (month == 2 && day >28){//2월의 일이 28을 초과할 때
        cout <<"2월은 28일까지 밖에 없습니다!!"<<endl;
        return 0;
    }
    else if(month<8 && (month % 2 ==0 && day>30)){
        cout<<month<<"월은 30일 까지만 입력하세요!!"<<endl;
        return 0;
    }
    else if(month>8 && (month % 2 == 1 && day>30)){
        cout<<month<<"월은 30일 까지만 입력하세요!!"<<endl;
        return 0;
    }
    switch (month){
        case 12:newDay=newDay+30;//31
        
        case 11:newDay=newDay+31;//28
        
        case 10:newDay=newDay+30;//31
        
        case 9:newDay=newDay+31;//30
        
        case 8:newDay=newDay+31;//31
        
        case 7:newDay=newDay+30;//30
        
        case 6:newDay=newDay+31;//31
        
        case 5:newDay=newDay+30;//31
        
        case 4:newDay=newDay+31;//30
        
        case 3:newDay=newDay+28;//31
        
        case 2:newDay=newDay+31;//30
        
        case 1:newDay+=day;//31
           
    }

    cout<<month<<"월 "<<day<<"일은 "<<newDay<<"번째 날입니다.";
    return 0;
}
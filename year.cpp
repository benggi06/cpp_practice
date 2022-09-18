#include <iostream>
using namespace std;

int main(){
    int year;
    bool y400,y100,y4;
    bool leapyear;

    cout <<"년도를 입력하세요: ";
    cin >> year;

    y400 = (year % 400 == 0);
    y100 = (year % 100 == 0);
    y4 = (year % 4 == 0);
    leapyear = (y400)||(y4 && !(y100));
    
    if (leapyear){
        cout <<"leapyear";
    }
    else{
        cout <<"not leapyear";
        
    }
    return 0;
}
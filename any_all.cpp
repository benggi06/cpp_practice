#include <iostream>

using namespace std;

int main(){
    bool button = false;
    int size;
    int num;
    int counter;
    
    cout<<"input size: ";
    cin>>size;

    while (size<counter){
        cout<<"input num: ";
        cin>>num;
        if (num % 2 ==0 && num % 3 ==0){
            button=true;
            break;
        }

    }

    if (button = true){
        cout<<num<<"은 6의 배수 입니다.";
    }
    else{
        cout<<"6의 배수가 없습니다.";
    }
    return 0;
}
#include <iostream>
using namespace std;

int main(){
    double num;
    cin >> num;
    int intNum= num;
    
    cout << "원래 숫자: "<<num<<endl;
    cout <<"정수부: "<<intNum<<endl;
    cout<<"실수부: "<<num-intNum;
    
    return 0;


}
#include <iostream>

using namespace std;
int main(){
    int size;
    int num;
    cout <<"크기를 입력하세요: ";
    cin >> size;

    double sum=0.0;
    double product = 1.0;
    int counter=0;
    while (counter<size){
        cout<<counter+1<<". 숫자를 입력하세요: ";
        cin >> num;
        
        sum+=num;
        product*=num;

        counter+=1;

    }
    cout<<"합:" <<sum<<endl;
    cout<<"곱:" <<product;





}


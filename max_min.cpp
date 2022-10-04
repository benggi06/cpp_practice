#include <iostream>
#include <limits>
using namespace std;
int main(){
    int size;
    int smallest=numeric_limits<int>::max();
    int largest=-(numeric_limits<int>::max());
    int counter = 0;
    int num;
    cout<<"input size: ";
    cin>>size;

    while (counter <size){
        cout<<"input num: ";
        cin>>num;
        if (num<smallest){
            smallest = num;
        }
        if(num>largest){
            largest = num;
        }
        counter+=1;
    }
    cout<<"max is "<<largest<<",min is "<<smallest;
    return 0;




}
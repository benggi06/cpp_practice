#include <iostream>
#include <cmath>
using namespace std;
double findMultiplier(double rate, double term)
{
    double multiplier = 0;
    double factor = 1 + rate/100;
    for (int i = term; i >= 0; i--)
    {
    multiplier += pow(factor , i);
    }
    return multiplier;
}

int main(){
    double money;
    double rate;
    double term;

    cout<<"투자 금액을 입력하세요.: ";
    cin>>money;

    cout<<"1년 마다의 이율을 입력하세요.: ";
    cin>>rate;

    cout<<"몇 년을 넣을지 입력하세요.: ";
    cin>>term;
    long double fu_fi=findMultiplier(rate,term)*money;
    cout<<"투자정보"<<endl;
    cout<<"투자 금액: "<<money<<endl;
    cout<<"이율: "<<rate<<"% 연 마다"<<endl;
    cout<<"기간: "<<term<<"년"<<endl<<endl;

    cout<<"투자의 승수 = "<<findMultiplier(rate,term)<<endl;
    cout<<"미래 가치 = "<<fu_fi;

    return 0;


}
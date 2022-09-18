#include <iostream>
using namespace std;
int main(){
    cout<<"성적들을 입력하세요."<<endl;
    int score1,score2,score3;
    int maxScore,minScore;
    double average;
    cin >> score1;
    cin >> score2;
    cin >> score3;
    //최대
    if (score1>score2 && score1>score3){
        maxScore=score1;

    }else if(score2>score1 && score2>score3){
        maxScore=score2;



    }else if(score3>score1 && score3>score2){
        maxScore=score3;
    }
    //최소
    if (score1<score2 && score1<score3){
        minScore=score1;

    }else if(score2<score1 && score2<score3){
        minScore=score2;

    }else if(score3<score1 && score3<score2){
        minScore=score3;
    }
    average=(score1+score2+score3)/3;

    cout <<"입력받은 성적입니다.: "<<score1<<"점 "<<score2<<"점 "<<score3<<"점"<<endl;
    cout <<"최고 점수: "<<maxScore<<"점, 최하 점수: "<<minScore<<endl;
    cout <<"평균 점수: "<<average<<"점";
    return 0;



}
#include<iostream>
using namespace std;

int main(){

    int id;
    string name, gender;
    float score1, score2, score3;
    double total_score , average;
    char grade;

    cout<<"\n";
    cout<<"<+=============Input Data===============+>\n";
    cout<<"\n";
    cout<<"Input ID      : ";cin>>id;
    cout<<"Input Name    : ";cin>>name;
    cout<<"Input Gender  : ";cin>>gender;
    cout<<"Input Score1  : ";cin>>score1;
    cout<<"Input Score2  : ";cin>>score2;
    cout<<"Input Score3  : ";cin>>score3;

    total_score = score1 + score2 + score3;
    average = total_score / 3;

    if(average >= 90 && average <= 100){
        grade = 'A';
    }else if(average >= 80 && average <= 90){
        grade = 'B';
    }else if(average >= 70 && average <= 80){
        grade = 'C';
    }else if(average >= 60 && average <= 70){
        grade = 'D';
    }else if(average >= 50 && average <= 60){
        grade = 'E';
    }else {
        grade = 'F';
    }

    cout<<"\n";
    cout<<"ID      : "<<id<<endl;
    cout<<"Name    : "<<name<<endl;
    cout<<"Gender  : "<<gender<<endl;
    cout<<"Total Score : "<<total_score <<endl;
    cout<<"Average     : "<<average<<endl;
    cout<<"Grade       : "<<grade<<endl;
    return 0;
}
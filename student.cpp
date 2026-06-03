#include<iostream>
using namespace std;

int main(){
	
	int id ;
	string name, gender;
	float score1, score2, score3, score4;
	double total_score, average; 
	
	cout<<"\n";
	cout<<"<================Input Data================>\n";
	cout<<"\n";
	cout<<"Enter ID     : ";cin>>id;
	cout<<"Enter Name   : ";cin>>name;
	cout<<"Enter Gender : ";cin>>gender;
	cout<<"Enter Score1 : ";cin>>score1;
	cout<<"Enter Score2 : ";cin>>score2;
	cout<<"Enter Score3 : ";cin>>score3;
	cout<<"Enter Score4 : ";cin>>score4;
	
	total_score = score1 + score2 + score3 + score4;
	average = total_score / 4;
	
	cout<<endl;
	cout<<"<================Output Data=============>\n";
	cout<<"ID    : "<<id<<endl;
	cout<<"Name  : "<<name<<endl;
	cout<<"Gender : "<<gender<<endl;
	cout<<"Total Score = "<<total_score<<endl;
	cout<<"Average     = "<<average;
	
	
	return 0;
}
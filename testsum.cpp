#include<iostream>
using namespace std;

int id;
string name, gender;
float score1, score2, score3;

void Input(){
	cout<<"\n";
	cout<<"<==============Input Data===============>\n";
	cout<<"Input ID       : ";cin>>id;
	cout<<"Input Name     : ";cin>>name;
	cout<<"Input Gender   : ";cin>>gender;
	cout<<"Input Score1    : ";cin>>score1;
	cout<<"Input Score2    : ";cin>>score2;
	cout<<"Input Score3    : ";cin>>score3;
}

double Total_Score(){
	return score1 + score2 + score3;
}

double Average(){
	return Total_Score() /3;
}

char Grade(){
	double avg = Average();
	
	if(avg <= 90){
		return 'A';
	}
}

void Output(){
	cout<<"Total Sore = "<<Total_Score()<<endl;
	cout<<"Average    = "<<Average()<<endl;
}

int main(){
	
	Input();
	Output();
	
	return 0;
}
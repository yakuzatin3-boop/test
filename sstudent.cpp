#include<iostream>
using namespace std;

struct Student{
	int id;
	string name, gender;
	float score;
};

Student Input();
const void Output(const Student &obj);

int main(){
	
	int n;
	cout<<"Input number of student = ";cin>>n;
	Student obj[n];
	for(int i=0; i<n; i++){
		obj[i] = Input();
	}
	cout<<"\n";
	for(int i=0; i<n; i++){
		Output(obj[i]);
	}
	
	return 0;
}
Student Input(){
	Student obj;
	cout<<"Input ID  = ";cin>>obj.id;
	cout<<"Input Name  = ";cin>>obj.name;
	cout<<"Input Gender = ";cin>>obj.gender;
	cout<<"Input Score = ";cin>>obj.score;
	return obj;
}

const void Output(const Student &obj){
	cout<<"ID   = "<<obj.id<<endl;
	cout<<"Name   = "<<obj.name<<endl;
	cout<<"Gender = "<<obj.gender<<endl;
	cout<<"Score = "<<obj.score<<endl;
}

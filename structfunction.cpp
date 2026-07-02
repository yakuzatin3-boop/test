#include<iostream>
using namespace std;

struct Employee{
	
	int id;
	string name, gender;
	string position;
	float salary;
	
};


int main(){
	
	Employee obj[40];
	
	int n;
	
	cout<<"Input number of Employee = ";cin>>n;
	
	for(int i=0; i<n; i++){
		cout<<"\n";
		cout<<"<==========employee["<<i+1<<"]===============>\n";
		cout<<"Input ID      : ";cin>>obj[i].id;
		cout<<"Input Name    : ";cin>>obj[i].name;
		cout<<"Input Gender  : ";cin>>obj[i].gender;
		cout<<"Input Position : ";cin>>obj[i].position;
		cout<<"Input Salary  : ";cin>>obj[i].salary;
	}
	
	
	return 0;
}
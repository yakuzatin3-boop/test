#include<iostream>
using namespace std;

class Employee{
	private :
		int id;
		string name, gender, position;
		float salary;
	public :
		
//		Employee(){
//			id = 007;
//			name = "Poy";
//			gender = "Male";
//			position = "IT";
//			salary = 500.00;
//		}
		
		Employee(){
			id = 0;
			name = "Null";
			gender = "Null";
			position = "Null";
			salary = 0;
		}
		
		
		void Input(){
			cout<<"\n";
			cout<<"<=============Input Data=============>\n";
			cout<<"\n";
			cout<<"Input ID        : ";cin>>id;
			cout<<"Input Name      : ";cin>>name;
			cout<<"Input Gender    : ";cin>>gender;
			cout<<"Input Position  : ";cin>>position;
			cout<<"Input Salary    : ";cin>>salary;
		}
		void Output(){
			cout<<"\n";
			cout<<"<=============Output Data===========>\n";
			cout<<"\n";
			cout<<"ID          : "<<id<<endl;
			cout<<"Name        : "<<name<<endl;
			cout<<"Gender      : "<<gender<<endl;
			cout<<"Position    : "<<position<<endl;
			cout<<"Salary      : "<<salary<<endl;
		}
};

int main(){
	Employee obj;

	obj.Output();
	
	Employee obj2;
	
	obj2.Output();
	
	return 0;
}
#include<iostream>
using namespace std;

class Employee{
	
	private :
		int id;
		string name, gender, position;
		float salary;
	public :
		Employee(){
			id =1;
			name = "Dara Sok";
			gender = "Male";
			position = "IT Backend";
			salary = 500;
		}
		
		Employee(int ID, string Name, string Gender, string Position, float Salary){
			this->id = ID;
			this->name = Name;
			this->gender = Gender;
			this->position = Position;
			this->salary = Salary;
		}
		
		void SetData(int ID, string Name, string Gender, string Position, float Salary){
			this->id = ID;
			this->name = Name;
			this->gender = Gender;
			this->position = Position;
			this->salary = Salary;
		}
		
		void Output(){
			cout<<"\n";
			cout<<"<==============Output Data============>\n";
			cout<<"ID      : "<<id<<endl;
			cout<<"Name    : "<<name<<endl;
			cout<<"Gender  : "<<gender<<endl;
			cout<<"Position : "<<position<<endl;
			cout<<"Salary   : "<<salary<<endl;
		}
};

int main(){
	
	Employee obj;
	
	obj.Output();
	
	int id;
	string name, gender, position;
	float salary;
	
	cout<<"\n";
	cout<<"<============Input Data=============>\n";
	cout<<"Input ID      : ";cin>>id;
	cout<<"Input Name    : ";cin>>name;
	cout<<"Input Gender  : ";cin>>gender;
	cout<<"Input POsition : ";cin>>position;
	cout<<"Input Salary  : ";cin>>salary;
	
	Employee obj2(id, name, gender, position, salary);
	
	obj2.Output();
	
	Employee obj3(3, "jack", "Male", "IT", 600);
	
	obj3.Output();
	
	Employee obj4;
	
	obj4.SetData(4, "koko", "Male", "It", 900);
	obj4.Output();
	
	return 0;
}
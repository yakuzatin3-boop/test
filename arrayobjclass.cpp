#include<iostream>
using namespace std;

class Student{
	private :
		int id;
		string name;
		string gender;
		string Class;
		string subject;
	public :	
	//	get
        int ID(){
        	return id;
		}
		string Name(){
			return name;
		}
		string Gender(){
			return gender;
		}
		string CLass(){
			return Class;
		}
		string Subject(){
			return subject;
		}
//		input
		void Input(){
			cout<<"\n";
			cout<<"Input ID        : ";cin>>id;
			cout<<"Input Name      : ";cin>>name;
			cout<<"Input Gender    : ";cin>>gender;
			cout<<"Input Class     : ";cin>>Class;
			cout<<"Input Subject   : ";cin>>subject;
		}
//		output
		void Output(){
			cout<<"\n";
			cout<<"ID        : "<<id<<endl;
			cout<<"Name      : "<<name<<endl;
			cout<<"Gender    : "<<gender<<endl;
			cout<<"Class     : "<<Class<<endl;
			cout<<"Subject   : "<<subject<<endl;
		}
};

int main(){
	
	Student obj[40];
	int n, op;
	
	do{
		cout<<"\n";
		cout<<"<================>\n";
		cout<<"1. Input Data     \n";
		cout<<"2. Output Data    \n";
		cout<<" \n";
		cout<<"Please choose options = ";cin>>op;
		
		switch(op){
			case 1:{
				cout<<"\n";
				cout<<"<===========Input Data============>\n";
				cout<<"\n";
				cout<<"Input number of Student = ";cin>>n;
				for(int i=0; i<n; i++){
					cout<<"Dtudent["<<i+1<<"]\n";
					obj[i].Input();
				}
				break;
			}
			case 2:{
				cout<<"\n";
				cout<<"<==============Output Data=============>\n";
				for(int i=0; i<n; i++){
					obj[i].Output();
				}
				break;
			}
			case 3:{

				cout<<"\n";
				cout<<"<============Search Data=============>\n";
				int id;
				bool check = false;
				cout<<"Enter Id to find data of Student = ";cin>>id;
				for(int i=0; i<n; i++){
					if(id == obj[i].ID()){
						cout<<"\n";
						cout<<"Search Data has found\n";
						obj[i].Output();
						check = true;
						
					}
				}
				if(!check){
					cout<<"Search Data by id not found\n";
				}
				
				break;
			}
			case 4:{
				cout<<"\n";
				cout<<"<===============Update Data================>\n";
				string name;
				bool check = false;
				cout<<"Enter name of student to update data = ";cin>>name;
				for(int i=0; i<n; i++){
					if(name == obj[i].Name()){
						cout<<"\n";
						cout<<"Please Update data of student["<<i+1<<"]\n";
						cout<<"\n";
						obj[i].Input();
					}
				}
				if(!check){
					cout<<"Search name to update not found\n";
				}
			  break;
			}
			case 5:{
				cout<<"\n";
				cout<<"<================Delete Data=================>\n";
				int ID;
				bool check = false;
				cout<<"Enter ID to Delete Student : ";cin>>ID;
				for(int i=0; i<n; i++){
					if(ID == obj[i].ID()){
						for(int j=i; j<n-1; j++){
							obj[j] = obj[j+1];
						}
						
						check = true;
						cout<<"\n";
						cout<<"Delete Data Successed\n";
					}
					n--;
				}
				break;
			}
		}
		
	}while(op != 0);
	
	
	
	return 0;
}
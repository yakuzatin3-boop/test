#include<iostream>
using namespace std;

struct Employee{
	int id;
	char name[40], gender[40], position[50];
	float salary;
};

int main(){
	Employee obj[50];
	int n,op;
	
	do{
		cout<<"\n";
		cout<<"<===================>\n";
		cout<<"1. Input Data        \n";
		cout<<"2. Output Data       \n";
		cout<<"3. Update Data       \n";
		cout<<"4. Delete Data       \n";
		cout<<"5. Insert Data       \n";
		cout<<"6. Sort Data         \n";
		cout<<"7. Exit              \n";
		cout<<"<===================>\n";
		cout<<"\n";
		cout<<"Please Choose options = ";cin>>op;
		
		switch(op){
			case 1:{
				cout<<"\n";
				cout<<"<=================Input Data=============>\n";
				cout<<"\n";
				cout<<"Enter number of Employee = ";cin>>n;
				for(int i=0; i<n; i++){
					cout<<"\n";
					cout<<"<===========Employee["<<i+1<<"]============>\n";
					cout<<"\n";
					cout<<"Input Id     : ";cin>>obj[i].id;
					cout<<"Input Name   : ";cin.getline(obj[i].name, n);
					cout<<"Input Gender : ";cin>>obj[i].gender;
					cout<<"Input Position : ";cin>>obj[i].position;
					cout<<"Input Salary   : ";cin>>obj[i].salary;
				}
				break;
			}
			case 2:{
				cout<<"\n";
				cout<<"<==================Output Data=======================>\n";
				for(int i=0; i<n; i++){
					cout<<"\n";
					cout<<"<============Employee["<<i+1<<"]================>\n";
					cout<<"\n";
					cout<<"ID            : "<<obj[i].id<<endl;
					cout<<"Name          : "<<obj[i].name<<endl;
					cout<<"Gender        : "<<obj[i].gender<<endl;
					cout<<"Position      : "<<obj[i].position<<endl;
					cout<<"Salary        : "<<obj[i].salary<<endl;
				}
				break;
			}
			case 3:{
				cout<<"\n";
				cout<<"1. Update By ID     \n";
				cout<<"2. UPdate By Name   \n";
				cout<<"\n";
				cout<<"Please choose options = ";cin>>op;
				switch(op){
					case 1:{
						cout<<"\n";
						cout<<"<=================Update By ID================>\n";
						int SerchById ;
						bool check = false;
						cout<<"Enter ID to Update data of Employee = ";cin>>SerchById;
						for(int i=0; i<n; i++){
							if(SerchById == obj[i].id){
								cout<<"\n";
								cout<<"Please Update Data \n";
								cout<<"\n";
								cout<<"Update ID       : ";cin>>obj[i].id;
								cout<<"Update Name     : ";cin>>obj[i].name;
								cout<<"Update Gender   : ";cin>>obj[i].gender;
								cout<<"Update Position : ";cin>>obj[i].position;
								cout<<"UPdate Salary   : ";cin>>obj[i].salary;
							}
						}
						break;
					}
					case 2:{
						cout<<"\n";
						cout<<"<=================Update By ID================>\n";
						string SerchByName ;
						bool check = false;
						cout<<"Enter Name to Update data of Employee = ";cin>>SerchByName;
						for(int i=0; i<n; i++){
							if(SerchByName == obj[i].name){
								cout<<"\n";
								cout<<"Please Update Data \n";
								cout<<"\n";
								cout<<"Update ID       : ";cin>>obj[i].id;
								cout<<"Update Name     : ";cin>>obj[i].name;
								cout<<"Update Gender   : ";cin>>obj[i].gender;
								cout<<"Update Position : ";cin>>obj[i].position;
								cout<<"UPdate Salary   : ";cin>>obj[i].salary;
							}
						}
						break;
					}
				}
				break;
			}
			case 4:{
				cout<<"\n";
				cout<<"<=====================Delete Data======================>\n";
				
				break;
			}
		}
		
	}while(op != 7);
	
	return 0;
}
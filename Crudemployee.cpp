#include<iostream>
using namespace std;

int main(){
	
	int id[20];
	string name[20];
	string gender[20];
	string position[20];
	float salary[20];
	int n, op;
	
	do{
		cout<<"\n";
		cout<<"<==================>\n";
		cout<<"1. Input Data       \n";
		cout<<"2. Output Data      \n";
		cout<<"3. Update Data      \n";
		cout<<"4. Delete Data      \n";
		cout<<"5. Insert Data      \n";
		cout<<"6. Exit ............\n";
		cout<<"<===================>\n";
		cout<<"Please choose options = ";cin>>op;
		
		switch(op){
			
			case 1:{
				cout<<"\n";
				cout<<"<==============Input Data==============>\n";
				cout<<"Input number of Employee = ";cin>>n;
				for(int i=0; i<n; i++){
					cout<<"\n";
					cout<<"<==========Employee["<<i+1<<"]=========>\n";
					cout<<"Enter ID           : ";cin>>id[i];
					cout<<"Enter Name         : ";cin>>name[i];
					cout<<"Enter Gender       : ";cin>>gender[i];
					cout<<"Enter Position     : ";cin>>position[i];
					cout<<"Enter Salary       : ";cin>>salary[i];
				}
				cout<<"\n";
				cout<<"Input Data Successed\n";
				break;
			}
			case 2:{
				cout<<"\n";
				cout<<"<================Output Data==============>\n";
				for(int i=0; i<n; i++){
					cout<<"\n";
					cout<<"<==========Employee["<<i+1<<"]=========>\n";
					cout<<"ID           : "<<id[i]<<endl;
					cout<<"Name         : "<<name[i]<<endl;
					cout<<"Gender       : "<<gender[i]<<endl;
					cout<<"Position     : "<<position[i]<<endl;
					cout<<"Salary       : "<<salary[i]<<endl;
				}
				break;
			}
			case 3:{
				cout<<"\n";
				cout<<"<==================Update Data==================>\n";
				int ID;
				bool check = false;
				cout<<"Input ID to find data for update = ";cin>>ID;
				for(int i=0; i<n; i++){
					if(ID == id[i]){
						cout<<"\n";
						cout<<"Search Employee has found\n";
						cout<<"Please Update data \n";
						cout<<"<=========Employee["<<i+1<<"]=============>\n";
						cout<<"\n";
						cout<<"Update ID         : ";cin>>id[i];
						cout<<"Update Name       : ";cin>>name[i];
						cout<<"Update Gender     : ";cin>>gender[i];
						cout<<"Update Posiition  : ";cin>>position[i];
						cout<<"Update Salary     : ";cin>>salary[i];
						cout<<"\n";
						check = true;
						
					}
				}
				if(!check){
					cout<<"Search ID for update Data not found\n";
				}
				
				break;
			}

			case 4:{
				cout<<"\n";
				cout<<"<=================Delete Data==================>\n";
				string searchbyName;
				bool check = false;
				cout<<"search name to delete Employee = ";cin>>searchbyName;
				for(int i=0; i<n; i++){
					if(searchbyName == name[i]){
						for(int j=i; j<n-1; j++){
							id[j] = id[j+1];
							name[j] = name[j+1];
							gender[j] = gender[j+1];
							position[j] = position[j+1];
							salary[j] = salary[j+1];
						}
						n--;
						check = true;
						cout<<"\n";
						cout<<"Delete Data Successed\n";
					}
				}
				if(!check){
					cout<<"Search name to delete Employee not found\n";
				}
				break;
			}
			case 5:{
				cout<<"\n";
				cout<<"<==============Insert Data==============>\n";
				int add;
				cout<<"\n";
				cout<<"Enter number of employee that you want to add = ";cin>>add;
				for(int i=n; i<n+add; i++){
					cout<<"\n";
					cout<<"<========Employee["<<i+1<<"]==========>\n";
					cout<<"Enter ID          : ";cin>>id[i];
					cout<<"Enter Name        : ";cin>>name[i];
					cout<<"Enter Gender      : ";cin>>gender[i];
					cout<<"Enter Position    : ";cin>>position[i];
					cout<<"enter Salary      : ";cin>>salary[i];
				}
			}
			
		}
		
	}while(op != 6);
	
	return 0;
}
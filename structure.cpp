#include<iostream>
using namespace std;

struct Student{
	int id;
	string name, gender;
	int age;
	long HP;
};

void Input(Student obj[], int &n){
	cout<<"\n";
	cout<<"<================Input Student==============>\n";
	cout<<"\n";
	cout<<"Input number of Student = ";cin>>n;
	for(int i=0; i<n; i++){
		cout<<"\n";
		cout<<"<==============Student["<<i+1<<"]==============>\n";
		cout<<"Input ID      : ";cin>>obj[i].id;
		cout<<"Input Name    : ";cin>>obj[i].name;
		cout<<"Input Gender  : ";cin>>obj[i].gender;
		cout<<"Input Age     : ";cin>>obj[i].age;
		cout<<"Input HP      : ";cin>>obj[i].HP;
	}
}
void Output(Student obj[], int n){
	cout<<"\n";
	cout<<"<================Output Data=================>\n";
	for(int i=0; i<n; i++){
		cout<<"\n";
		cout<<"<===============Student["<<i+1<<"]====================>\n";
		cout<<"ID          : "<<obj[i].id<<endl;
		cout<<"Name        : "<<obj[i].name<<endl;
		cout<<"Gender      : "<<obj[i].gender<<endl;
		cout<<"PH          : "<<obj[i].HP<<endl;
		cout<<"Age         : "<<obj[i].age<<endl;
	}
}

void SearchById(Student obj[], int n){
	cout<<"\n";
	cout<<"<=============Serach ByID================>\n";
	int ById;
	bool check = false;
	cout<<"\n";
	cout<<"Enter ID to search Data of Student = ";cin>>ById;
	for(int i=0; i<n; i++){
		if(ById == obj[i].id){
			cout<<"\n";
			cout<<"<================Student["<<i+1<<"]=================>\n";
			cout<<"ID        : "<<obj[i].id<<endl;
			cout<<"Name      : "<<obj[i].name<<endl;
			cout<<"Gender    : "<<obj[i].gender<<endl;
			cout<<"PH        : "<<obj[i].HP<<endl;
			cout<<"Age       : "<<obj[i].age<<endl;
			cout<<"\n";
			check = true;
			cout<<"Search Student Has found\n";
		}
	}
	if(!check){
		cout<<"Search Data by Id not found\n";
	}
}

void SearchByName(Student obj[], int n){
	cout<<"\n";
	cout<<"<===================Search ByName===================>\n";
	string ByName;
	bool check = false;
	cout<<"\n";
	cout<<"Enter Name to search Data of Student = ";cin>>ByName;
	for(int i=0; i<n; i++){
		if(ByName == obj[i].name){
			cout<<"\n";
			cout<<"<================Student["<<i+1<<"]=================>\n";
			cout<<"ID        : "<<obj[i].id<<endl;
			cout<<"Name      : "<<obj[i].name<<endl;
			cout<<"Gender    : "<<obj[i].gender<<endl;
			cout<<"PH        : "<<obj[i].HP<<endl;
			cout<<"Age       : "<<obj[i].age<<endl;
			cout<<"\n";
			check = true;
			cout<<"Search Student Has found\n";
		}
	}
	if(!check){
		cout<<"Search student by name not found!\n";
	}
}

void UpdateByID(Student obj[], int n){
	cout<<"\n";
	cout<<"<=============UPdate Data By ID================>\n";
	int SearchID ;
	bool check = false;
	cout<<"\n";
	cout<<"Enter Id to update Data of Student = ";cin>>SearchID;
	for(int i=0; i<n; i++){
		if(SearchID == obj[i].id){
			cout<<"\n";
			cout<<"Please Update Data\n";
			cout<<"\n";
			cout<<"<==============Student["<<i+1<<"]==============>\n";
			cout<<"UPdate ID      : ";cin>>obj[i].id;
			cout<<"Update Name    : ";cin>>obj[i].name;
			cout<<"UPdate Gender  : ";cin>>obj[i].gender;
			cout<<"Update HP      : ";cin>>obj[i].HP;
			cout<<"Age            : ";cin>>obj[i].age;
			cout<<"\n";
			check = true;
			cout<<"Update Data Success\n";
		}
	}
	if(!check){
		cout<<"Search id to update Data of student not found\n";
	}
}
void UpdateByName(Student obj[], int n){
	cout<<"\n";
	cout<<"<=============UPdate Data By ID================>\n";
	string SearchName ;
	bool check = false;
	cout<<"\n";
	cout<<"Enter Name to update Data of Student = ";cin>>SearchName;
	for(int i=0; i<n; i++){
		if(SearchName == obj[i].name){
			cout<<"\n";
			cout<<"Please Update Data\n";
			cout<<"\n";
			cout<<"<==============Student["<<i+1<<"]==============>\n";
			cout<<"UPdate ID      : ";cin>>obj[i].id;
			cout<<"Update Name    : ";cin>>obj[i].name;
			cout<<"UPdate Gender  : ";cin>>obj[i].gender;
			cout<<"Update HP      : ";cin>>obj[i].HP;
			cout<<"Age            : ";cin>>obj[i].age;
			cout<<"\n";
			check = true;
			cout<<"Update Data Success\n";
		}
	}
	if(!check){
		cout<<"Search Name to update Data of student not found\n";
	}
}

void DeleteById(Student obj[], int &n){
	cout<<"\n";
	cout<<"<================Delete Student ByID===============>\n";
	int ID;
	bool check = false;
	cout<<"\n";
	cout<<"Enter Id to find student for delete = ";cin>>ID;
	for(int i=0; i<n; i++){
		if(ID == obj[i].id){
			for(int j=i; j<n-1; j++){
				obj[j] = obj[j+1];
			}
			n--;
			cout<<"\n";
			check = true;
			cout<<"Delete Data of Student Success\n";
			break;
		}
	}
	if(!check){
		cout<<"Search Data to delete not found\n";
	}
}
void DeleteByName(Student obj[], int &n){
	cout<<"\n";
	cout<<"<================Delete Student ByID===============>\n";
	string Name;
	bool check = false;
	cout<<"\n";
	cout<<"Enter Name to find student for delete = ";cin>>Name;
	for(int i=0; i<n; i++){
		if(Name == obj[i].name){
			for(int j=i; j<n-1; j++){
				obj[j] = obj[j+1];
			}
			n--;
			cout<<"\n";
			check = true;
			cout<<"Delete Data of Student Success\n";
			break;
		}
	}
	if(!check){
		cout<<"Search Data to delete not found\n";
	}
}

void Add(Student obj[], int &n){
	cout<<"\n";
	cout<<"<==============Student["<<n<<"]===============>\n";
	cout<<"Input ID    : ";cin>>obj[n].id;
	cout<<"Input Name  : ";cin>>obj[n].name;
	cout<<"Input Gender  : ";cin>>obj[n].gender;
	cout<<"Input Age     : ";cin>>obj[n].age;
	cout<<"Input HP      : ";cin>>obj[n].HP;
	n++;
}


int main(){
	Student obj[20];
	int n, op;	
	
	do{
		cout<<"\n";
		cout<<"<========================>\n";
		cout<<"1. Input Data             \n";
		cout<<"2. Output Data            \n";
		cout<<"3. Search Data            \n";
		cout<<"4. Update Data            \n";
		cout<<"5. Delete Data            \n";
		cout<<"6. Add Data               \n";
		cout<<"7. System clear           \n";
		cout<<"8. Exit...................\n";
		cout<<"==========================\n";
		cout<<"\n";
		cout<<"Please choose options = ";cin>>op;
		
		switch(op){
			case 1:{
				
				Input(obj, n);
				break;
			}
			case 2:{
				Output(obj, n);
				break;
			}
			///Search Data
			case 3:{
				cout<<"\n";
				cout<<"<===============Search Data==============>\n";
				cout<<"\n";
				cout<<"1. Search  By ID    \n";
				cout<<"2. Search  By Name  \n";
				cout<<"\n";
				cout<<"Please choose options = ";cin>>op;
				switch(op){
					case 1:{
						SearchById(obj, n);
						break;
					}
					case 2:{
						SearchByName(obj, n);
						break;
					}
					default :{
						cout<<"Options not found\n";
						break;
					}
				}
				break;
			}
			///Update Data
			case 4:{
				cout<<"\n";
				cout<<"<================Update Data==============>\n";
				cout<<"\n";
				cout<<"1. Update By Id    \n";
				cout<<"2. Update By name   \n";
				cout<<"\n";
				cout<<"Please choose options = ";cin>>op;
				
				switch(op){
					case 1:{
						UpdateByID(obj, n);
						break;
					}
					case 2:{
						UpdateByName(obj, n);
						break;
					}
					default :{
						cout<<"Option not found\n";
						break;
					}
				}
				break;
			}
			case 5:{
				cout<<"\n";
				cout<<"<================Delete Data==============>\n";
				cout<<"\n";
				cout<<"1. Delete By Id    \n";
				cout<<"2. Delete By name   \n";
				cout<<"\n";
				cout<<"Please choose options = ";cin>>op;
				
				switch(op){
					case 1:{
						DeleteById(obj, n);
						break;
					}
					case 2:{
						DeleteByName(obj, n);
						break;
					}
					default :{
						cout<<"Option not found\n";
						break;
					}
				}
				break;
			}
			case 6:{
				Add(obj, n);
				break;
			}
			case 7:{
				system("cls");
				break;
			}
			case 8:{
				cout<<"Exit....................\n";
				break;
			}
			default:{
				cout<<"Options not found\n";
				break;
			}
		}
	}while(op != 8);
	
	
	return 0;
}
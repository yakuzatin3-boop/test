#include<iostream>
using namespace std;

struct Book{
	
	int book_id;
	string title, subject;
	string author;
	float price;
	int yeras;
	
};

void Input(Book obj[], int &n){
	cout<<"\n";
	for(int i=0; i<n; i++){
		cout<<"\n";
		cout<<"<==========Book["<<i+1<<"]============>\n";
		cout<<"Enter Book_ID     = ";cin>>obj[i].book_id;
		cout<<"Enter Title       = ";cin>>obj[i].title;
		cout<<"Enter Subject     = ";cin>>obj[i].subject;
		cout<<"Enter Author      = ";cin>>obj[i].author;
		cout<<"Enter Yera        = ";cin>>obj[i].yeras;
	}
}

int main(){
	
	Book obj[50];
	int n, op;
	
	do{
		cout<<"\n";
		cout<<"<====================>\n";
		cout<<"1. Input Data         \n";
		cout<<"2. Output Data        \n";
		cout<<"3. Update Data        \n";
		cout<<"4. Delete Data        \n";
		cout<<"5. Insert Data        \n";
		cout<<"6. Add data           \n";
		cout<<"7. Sort Data          \n";
		cout<<"8. Exit  .............\n";
		cout<<"======================\n";
		cout<<"Please choose option  = ";cin>>op;
		switch(op){
			case 1:{
				cout<<"\n";
				cout<<"<==============Input Data===============>\n";
				cout<<"Enter number of Book = ";cin>>n; 
				Input(obj, n);
				break;
			}
		}
	}while(op != 0);
	
	return 0;
}
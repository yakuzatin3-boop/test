#include<iostream>
using namespace std;

int main(){
	
	float num1 , num2;
	int op;
	
	do{
		cout<<"\n";
		cout<<"<<<<<<Calculate>>>>>>>\n";
		cout<<"1. Option + \n";
		cout<<"2. Option - \n";
		cout<<"3. Option * \n";
		cout<<"4. Option / \n";
		cout<<"5. Exit ....\n";
		cout<<"\n";
		cout<<"Please choose options = ";cin>>op;
		
		switch(op){
			case 1:{
				cout<<"\n";
				cout<<"Input num1 = ";cin>>num1;
				cout<<"Input num2 = ";cin>>num2;
				cout<<"\n";
				cout<<"num1 + num2 = "<<num1 + 	num2<<endl;
				break;
			}
			case 2:{
				cout<<"\n";
				cout<<"Input num1 = ";cin>>num1;
				cout<<"Input num2 = ";cin>>num2;
				cout<<"\n";
				cout<<"num1 - num2 = "<<num1 - num2<<endl;
				break;
			}
			case 3:{
				cout<<"\n";
				cout<<"Input num1 = ";cin>>num1;
				cout<<"Input num2 = ";cin>>num2;
				cout<<"\n";
				cout<<"num1 * num2 = "<<num1 * num2<<endl;
				break;
			}
			case 4:{
				cout<<"\n";
				cout<<"Input num1 = ";cin>>num1;
				cout<<"Input num2 = ";cin>>num2;
				cout<<"\n";
				cout<<"num1 / num2 = "<<num1 /num2<<endl;
				break;
			}
			case 5:{
				cout<<"Exit program ...\n";
				break;
			}
			default :{
				cout<<"option not found\n";
				break;
			}
		}
		
	}while(op != 5);
	
	return 0;
}
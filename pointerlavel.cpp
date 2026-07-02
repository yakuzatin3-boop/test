#include<iostream>
using namespace std;

int main(){
	
	int n , op;
	int array[70];
	int *p = array;
	
	do{
		cout<<"\n";
		cout<<"1. Input Value     \n";
		cout<<"2. Output Value     \n";
		cout<<"3. Update Value     \n";
		cout<<"4. Delete Value      \n";
		cout<<"5. Exit .............\n";
		cout<<"\n";
		cout<<"Please choose options = ";cin>>op;
		
		switch(op){
			case 1:{
				cout<<"\n";
				cout<<"<============Input Value============>\n";
				cout<<"\n";
				cout<<"Input number of array pointer = ";cin>>n;
				for(int i=0; i<n; i++){
					cout<<"Input value of array pointer = ";cin>>*(p + i);
				}
				break;
			}
		}
		
	}while(op != 5);
	
	return 0;
}
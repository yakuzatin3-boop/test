#include<iostream>
using namespace std;

int main(){
	
	int array[40];
	int n, op;
	
	do{
		cout<<"\n";
		cout<<"<=================>\n";
		cout<<"1. Input Value     \n";
		cout<<"2. Output Value    \n";
		cout<<"3. Search Value    \n";
		cout<<"4. Update Value    \n";
		cout<<"5. Delete Value    \n";
		cout<<"6. Exit ...........\n";
		cout<<"<=================>\n";
		cout<<"Please choose option : ";cin>>op;
		
		switch(op){
			case 1:{
				cout<<"\n";
				cout<<"<==============Input Value===============>\n";
				cout<<"Enter number of array = ";cin>>n;
				cout<<"\n";
				for(int i=0; i<n; i++){
					cout<<"Enter value of array["<<i<<"] = ";cin>>array[i];
				}
				break;
			}
			case 2:{
				cout<<"\n";
				cout<<"<=============Output Value===============>\n";
				cout<<"\n";
				for(int i=0; i<n; i++){
					cout<<"Value of array["<<i<<"] = "<<array[i]<<endl;
				}
				break;
			}
			case 3:{
				cout<<"\n";
				cout<<"<=============Search Value===============>\n";
				int index;
				bool check = false;
				cout<<"Enter index to find value = ";cin>>index;
				for(int i=0; i<n; i++){
					if(index == i){
						cout<<"Value of array at index["<<i<<"] = "<<array[i]<<endl;
						cout<<"\n";
						check = true;
						cout<<"Search value has found\n";
					}
				}
				if(!check){
					cout<<"Search value by index not found\n";
				}
				break;
			}
			case 5:{
				cout<<"\n";
				cout<<"<==============Delete Value=============>\n";
				int index;
				bool check = false;
				cout<<"Enter index to delete value = ";cin>>index;
				for(int i=0; i<n; i++){
					if(index == i){
						for(int j=i; j<n-1; j++){
							array[j] = array[j+1];
						}
						n--;
						check = true;
						cout<<"Delete value successed\n";
					}
				}
				if(!check){
					cout<<"Enter index to delete value not found\n";
				}
				break;
			}
		}
		
	}while(op != 6);
	
	return 0;
}
#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
	
	int n, op;
	int *array;
	
	do{
		cout<<"\n";
		cout<<"1. Input value   \n";
		cout<<"2. Output Value   \n";
		cout<<"3. Search Value    \n";
		cout<<"4. Update Value    \n";
		cout<<"5. Exit            \n";
		cout<<"\n";
		cout<<"Please choose options = ";cin>>op;
		
		switch(op){
			case 1:{
				cout<<"\n";
				cout<<"<=============Input Value============>\n";\
				cout<<"Input number of array = ";cin>>n;
				array = (int*)malloc(n * sizeof(int));
				cout<<"\n";
				for(int i=0; i<n; i++){
					cout<<"Input Value of array["<<i<<"] = ";cin>>array[i];
				}
				break;
			}
			case 2:{
				cout<<"\n";
				cout<<"<==============Output Value===============>\n";
				cout<<"\n";
				for(int i=0; i<n; i++){
					cout<<"value of array["<<i<<"] = "<<array[i]<<endl;
				}
				break;
			}
		}
		
	}while(op != 5);
	
	return 0;
}
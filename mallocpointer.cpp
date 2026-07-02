#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
	
	int *p;
	int n, op;
	
	do{
		cout<<"\n";
		cout<<"1. Input Data      \n";
		cout<<"2. Output Data     \n";
		cout<<"\n";
		cout<<"PLease choose options =  ";cin>>op;
		
		switch(op){
			case 1:{
				cout<<"\n";
				cout<<"Input Number of array pointer = ";cin>>n;
				p = (int*)malloc(n * sizeof(int));
				cout<<"\n";
				for(int i=0; i<n; i++){
					cout<<"Enter valaue of *(p + "<<i<<") = ";cin>>*(p + i);
				}
				break;
			}
		}
		
	}while(op != 0);
		
	return 0;
}
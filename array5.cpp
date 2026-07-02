#include<iostream>
using namespace std;

int main(){
	
	int array[10] = {93, 74, 73, 52, 94, 23, 23};
	
	for(int i=0; i<7; i++){
		cout<<"Value of array["<<i<<"] = "<<array[i]<<endl;
	}
	cout<<"\n";
//	74, 52, 23
//	93, 52, 23
//	93, 73, 94, 23
//	23, 93
//	94, 73, 93, 
    for(int i=1; i<6; i+=2){
    	cout<<array[i]<<", ";
	}
	cout<<"\n";
	for(int i=0; i<7; i+=3){
		cout<<array[i]<<", ";
	}
	cout<<"\n";
	for(int i=0; i<7; i+=2){
		cout<<array[i]<<", ";
	}
    
	cout<<"\n";
	for(int i=6; i>=0; i-=6){
		cout<<array[i]<<", ";
	}
    
    
	return 0;
}
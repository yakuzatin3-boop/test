#include<iostream>
using namespace std;

int main(){
	
	int n;
	cout<<"\n";
	cout<<"Input number of array = ";cin>>n;
	int array[n];
	
	for(int i=0; i<n; i++){
		cout<<"Input array["<<i<<"] = ";cin>>array[i];
	}
	cout<<"\n";
	
	for(int i=0; i<n; i++){
		cout<<"array["<<i<<"] = "<<array[i]<<endl;
	}
	cout<<"\n";
	cout<<"<===============Search Value===============>\n";
	cout<<"\n";
	int index;
	bool check = false;
	cout<<"Enter index to find value = ";cin>>index;
	for(int i=0; i<n; i++){
		if(index == i){
			cout<<"\n";
			cout<<"Value of array["<<i<<"] = "<<array[i]<<endl;
			check = true;
			cout<<"check value has found\n";
		}
	}
	if(!check){
		cout<<"search value by indext not found\n";
	}
	
	
	return 0;
}
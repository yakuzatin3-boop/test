#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
	
	int *num;
	int n;
	cout<<"Input number of array = ";cin>>n;
	
	num = (int*)malloc( n * sizeof(int));
	
	for(int i=0; i<n; i++){
		cout<<"Value of num = "<<num[i]<<endl;
	}		
return 0;
}
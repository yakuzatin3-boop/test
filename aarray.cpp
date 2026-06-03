#include<iostream>
using namespace std;

int main(){
	
	int array[3][4] = {{1, 2, 3, 4},
	                   {5, 6, 7, 8},
	                   {9, 10,11,12}};
	                   
	cout<<"\n";
	for(int i =0; i<4; i++){
		cout<<array[1][i]<<"  ";
	}
	cout<<"\n";
	for(int i = 2; i>=0; i--){
		cout<<array[i][3]<<"  ";
	}
	
	
	return 0;
}
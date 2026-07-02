#include<iostream>
using namespace std;
//Globale variable
int num1,num2;

void Sum(){
	
	cout<<"Input num from Sum() = ";cin>>num1;
	
}
void Num(){
	
	cout<<"Input num from Num() = ";cin>>num1;
	
}
int main(){
	cout<<"Input num from main() = ";cin>>num1;
	Sum();
	Num();
	return 0;
}
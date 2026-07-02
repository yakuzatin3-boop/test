#include<iostream>
using namespace std;

void Swap(){
	 int a= 10; int b = 20;
	 cout<<"\n";
	 cout<<"Befor Swap\n";
	 cout<<"a = "<<a<<"   b = "<<b<<endl;
	 int c = a;
	     a = b;
	     b = c;
	
	cout<<"After Swap\n";
	cout<<"a = "<<a<<"    b = "<<b<<endl;
	
}

int main(){
	Swap();
}
#include<iostream>
using namespace std;

void Swap(int &a,int &b){
	int temp  = a;
	     a  = b;
	     b = temp;
}

int main(){
	
    int x = 4, y = 8;
	
	cout<<"befor swap\n";
	cout<<"\n";
	cout<<"x   = "<<x <<"     y = "<<y<<endl;
	
	Swap(x, y);
	
	cout<<"After swap\n";
	cout<<"\n";
	cout<<"x   = "<<x <<"     y = "<<y<<endl;
	
	return 0;
}
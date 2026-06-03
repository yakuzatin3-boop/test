#include<iostream>
using namespace std;

void Swap(int &a, int &b){
	int temp = a;
	        a = b;
	        b = temp;
	    
}

int main(){
	
	int x, y;
	cout<<"\n";
	cout<<"Enter X = ";cin>>x;
	cout<<"Enter Y = ";cin>>y;
	cout<<"\n";
	cout<<"----------------Before Swap-------------\n";
	cout<<"X = "<<x<<",     Y = "<<y<<endl;
	Swap(x, y);
	cout<<"\n";
	cout<<"----------------After Swap-------------\n";
	cout<<"X = "<<x<<",     Y = "<<y<<endl;
	
	return 0;
}
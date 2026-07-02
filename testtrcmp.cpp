#include<iostream>
using namespace std;

double Sum(double a, double b){
	
	return a + b;
}

int main(){
	
	double x, y;
	cout<<"\n";
	
	cout<<"Enter value of x = ";cin>>x;
	cout<<"Enter value of y = ";cin>>y;
	
	double s = Sum(x, y);
	
	cout<<"<============Value of Sum + ==============>\n";
	cout<<"Sum + 2 = "<<s + 2<<endl;
	cout<<"Sum + 120 = "<<s + 120 <<endl;
	cout<<"Sum - 30 = "<<s - 30<<endl;
	
	return 0;
}
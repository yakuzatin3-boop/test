#include<iostream>
using namespace std;                                     

int main(){
	
	int id;
	string name;
	float price;
	int discount, quantity;
	double total_price, payment;
	
	cout<<"\n";
	cout<<"<============Enter Product===========>\n";
	cout<<"Input ID       : ";cin>>id;
	cout<<"Input Name     : ";cin>>name;
	cout<<"Input Price    : $";cin>>price;
	cout<<"Input Quantity : ";cin>>quantity;
	cout<<"Input Discount : %";cin>>discount;
	
	total_price = price * quantity;
	payment = total_price - (total_price * discount) / 100;
	
	cout<<"\n";
	cout<<"<============Receipt============>\n";
	cout<<"ID of product  : "<<id<<endl;
	cout<<"Name           : "<<name<<endl;
	cout<<"Quantity       : "<<quantity<<endl;
	cout<<"Price          : "<<price<<"$"<<endl;
	cout<<"Discount       : "<<discount<<"%"<<endl;
	cout<<"Todate Price   : "<<total_price<<"$"<<endl;
	cout<<"Payment        : "<<payment<<"$"<<endl;
	
	
	return 0;
}
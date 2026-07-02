#include<iostream>
#include<cstdlib>
using namespace std;

struct Book{
	
	int book_id;
	string author;
	string title;
	string subject;
	
}obj1, obj2;

int main(){
	
	cout<<"\n";
	cout<<"Input ID of Book = ";cin>>obj1.book_id;
	cout<<"Input Book title = ";cin>>obj1.title;
	cout<<"Input Book Subject = ";cin>>obj1.subject;
	cout<<"Input Book Author  = ";cin>>obj1.author;
	
	return 0;
}
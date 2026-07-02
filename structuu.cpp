#include<iostream>
using namespace std;

struct Student{
	string name;
	int id;
	
	struct DOB{
		int dd;
		int mm;
		int yy;
	}db;
}em;

int main(){
	
	Student st;
	
	cout<<"\n";
	cout<<"<==========Input Data============>\n";
	cout<<"Input ID         : ";cin>>st.id;
	cin.ignore();
	cout<<"Input Name       : ";getline(cin, st.name);
	cout<<"Input Day of Birth : ";cin>>st.db.dd;
	cout<<"Input Mount of Birth : ";cin>>st.db.mm;
	cout<<"Input Years of Birth : ";cin>>st.db.yy;
	
	
	cout<<"\n";
	cout<<"<=========Output Data===========>\n";
	cout<<"ID    : "<<st.id<<endl;
	cout<<"Name  : "<<st.name<<endl;
	cout<<"Date of Birth : "
	     <<(st.db.dd < 10 ? "0" : "") << st.db.dd<<"/"
	      <<(st.db.mm < 10 ? "0" : "") << st.db.mm<<"/"
	     <<st.db.yy;
	     
	        
	return 0; 
}
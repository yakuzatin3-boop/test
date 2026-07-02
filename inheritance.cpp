#include<iostream>
using namespace std;

class Student{
	public :
		void Learn(){
			cout<<"I'm a Student\n";
			cout<<"I'm learnning at ETEC CENTER \n";
		}
};

class Person : public Student{
	public :
		void Name(){
			cout<<"Hello, My name is Dara\n";
		}
};
int main(){
	
	Person obj;
	
	obj.Name();
	obj.Learn();
	
	
	return 0;
}
#include<iostream>
#include<math.h>
using namespace std;

int main(){
	
	int n, sum = 0;
	cout<<"\n";
	cout<<"Input number of loop = ";cin>>n;
	
	int i =1;
	while(i<=n){
		
		cout<<i<<"+";
		sum+=i;
		
		i+=2;
	}
	cout<<"\b = "<<sum;
	
	
	return 0;
}
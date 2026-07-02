#include<iostream>
using namespace std;

int main(){
	
	char array[4][6] ={{'A', 'B', 'C', 'D', 'E', 'F'},
	                   {'G', 'H', 'I', 'J', 'K', 'L'},
					   {'M', 'N', 'O', 'P', 'Q', 'R'},
					   {'S', 'T', 'U', 'V', 'W', 'X'}};
			
				// O P Q R
				// O N M
				// U O I C
				// R L F
				// X V T
				// N P R
				// D V
				// A E
				// H J L
				// T N H B	

	    cout<<"\n";
	    for(int i = 2; i<=5; i++){
			cout<<array[2][i]<<"   ";
		}
		cout<<"\n";
		for(int i=2; i>=0; i--){
			cout<<array[2][i]<<"   ";
		}
		cout<<"\n";
		for(int i=3; i>=0; i--){
			cout<<array[i][2]<<"  ";
		}
		cout<<"\n";
		for(int i=2; i>=0; i--){
			cout<<array[i][5]<<"  ";
		}
		cout<<"\n";
		for(int i=5; i>=1; i-=2){
			cout<<array[3][i]<<"  ";
		}
		cout<<"\n";
		for(int i=1; i<=5; i+=2){
			cout<<array[2][i]<<"  ";
		}
		cout<<"\n";
		for(int i=0; i<=3; i+=3){
			cout<<array[i][3]<<"  ";
		}
		cout<<"\n";
		for(int i=0; i<=4; i+=4){
			cout<<array[0][i]<<"  ";
		}
	return 0;
}
#include<iostream>
using namespace std;

int main(){
	
	char array[4][5] = {{'A', 'B', 'C', 'D', 'E'},
	                    {'F', 'G', 'H', 'I', 'J'},
						{'K', 'L', 'M', 'N', 'O'},
						{'P', 'Q', 'R', 'S', 'T'}};
						
    cout<<"\n";
    
    for(int i=2; i<=4; i++){
    	cout<<array[0][i]<<"  ";
	}
	
    cout<<"\n";
    
    for(int i=3; i>= 0; i--){
    	cout<<array[i][3]<<"  ";
	}
	
	return 0;
}
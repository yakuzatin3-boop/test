#include<iostream>
#include<cstdlib>
using namespace std;

int main(){

	int *p;
	int n, op;
	
	do{
		cout<<"\n";
		cout<<"<================>\n";
		cout<<"1. Input Data     \n";
		cout<<"2. Output Data    \n";
		cout<<"3. Delete Data    \n";
		cout<<"4. Add Data       \n";
		cout<<"5. Exit...........\n";
		cout<<"\n";
		cout<<"PLease choose options = ";cin>>op;
		
		switch(op){
			case 1:{
				cout<<"\n";
				cout<<"<=============Input Data=============>\n";
				cout<<"Input number of array pointer = ";cin>>n;
				p = (int*)calloc(n, sizeof(int));
				cout<<"\n";
				for(int i=0; i<n; i++){
					cout<<"Enter value od *(p + "<<i<<") = ";cin>>*(p + i);
				}
				break;
			}
			case 2:{
				cout<<"\n";
				cout<<"<=============Ouput Data=============>\n";
				cout<<"\n";
				for(int i=0; i<n; i++){
					cout<<"Value of pointer = "<<*(p + i)<<endl;
				}
				cout<<"\n";
				cout<<"Value of n = "<<n<<endl;
				break;
			}
			case 3:{
				cout<<"\n";
				cout<<"<==============Delete Data=================>\n";
				int index;
				bool check = false;
				cout<<"Input index to delete value = ";cin>>index;
				
				for(int i=0; i<n; i++){
					if(index == i){
						for(int j=i; j<n-1; j++){
							*(p + j) = *(p + j+1);
						}
						
					}
					n--;
				}
				break;
			}
			case 6:{
				for(int i = 0; i < n - 1; i++) {
                for(int j = i + 1; j < n; j++) {
                    if(*(p + i) > *(p + j)) {
                        int temp = *(p + i);
                        *(p + i) = *(p + j);
                        *(p + j) = temp;
                    }
                }
            }
				break;
			}
		}
		
	}while(op != 5);
	
	return 0;
}
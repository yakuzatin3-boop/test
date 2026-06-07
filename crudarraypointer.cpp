#include<iostream>
using namespace std;

int main(){

    int array[60];
    int *p = array;
    int n, op;

    do{
        cout<<"\n";
        cout<<"1. Input Value       \n";
        cout<<"2. Output Vakue      \n";
        cout<<"3. Update Value      \n";
        cout<<"4. Sort Value        \n";
        cout<<"\n";
        cout<<"<===================>\n";
        cout<<"Please choose options = ";cin>>op;

        switch(op){
            case 1:{
                cout<<"\n";
                cout<<"<------------Input Value-------------->\n";
                cout<<"Input size of array pointer = ";cin>>n;
                cout<<"\n";
                for(int i=0; i<n; i++){
                    cout<<"Enter Value of p["<<i<<"] = ";cin>>*(p + i);
                }
                break;
            }
            case 2:{
                cout<<"\n";
                cout<<"<=================Output Value================>\n";
                cout<<"\n";
                for(int i=0; i<n; i++){
                    cout<<"Value of p["<<i<<"] = "<<*(p + i)<<endl;
                }
                break;
            }
            case 4:{
                cout<<"\n";
                cout<<"<===================sort Value===============\n";
                cout<<"\n";
                for(int i =0; i<n-1; i++){
                    for(int j =0; j<n-i-1; j++){
                        if(*(p+j) > *(p + (j+1)) ){
                            int temp = *(p + j);
                            *(p + j) = *(p + (j + 1));
                            *(p + (j + 1)) = temp;
                        }
                    }
                }
                break;
            }
        }

    }while(op != 0);

    cout<<"\n";
    return 0;
}